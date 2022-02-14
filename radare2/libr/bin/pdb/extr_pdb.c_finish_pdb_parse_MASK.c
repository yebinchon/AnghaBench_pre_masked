
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int buf; TYPE_1__* stream_map; scalar_t__ pdb_streams2; scalar_t__ pdb_streams; TYPE_1__* root_stream; } ;
struct TYPE_14__ {struct TYPE_14__* stream; int (* free ) (TYPE_1__*) ;scalar_t__ streams_list; struct TYPE_14__* stream_pages; } ;
typedef TYPE_1__ STpiStream ;
typedef TYPE_1__ SStreamParseFunc ;
typedef TYPE_1__ SPage ;
typedef TYPE_1__ SPDBInfoStream ;
typedef TYPE_1__ SDbiStream ;
typedef TYPE_1__ R_PDB_STREAM ;
typedef TYPE_1__ R_PDB7_ROOT_STREAM ;
typedef TYPE_8__ R_PDB ;
typedef int RListIter ;


 int FUNC_0 (scalar_t__,int,TYPE_1__**) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int * FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9(R_PDB *VAR_0) {
 R_PDB7_ROOT_STREAM *VAR_1 = VAR_0->root_stream;
 RListIter *VAR_2;
 SPage *VAR_3 = 0;

 if (!VAR_1) {
  return;
 }
 VAR_2 = FUNC_7 (VAR_1->streams_list);
 while (FUNC_6 (VAR_2)) {
  VAR_3 = (SPage *) FUNC_5 (VAR_2);
  FUNC_1 (VAR_3->stream_pages);
  VAR_3->stream_pages = 0;
  FUNC_1 (VAR_3);
  VAR_3 = 0;
 }
 FUNC_4 (VAR_1->streams_list);
 VAR_1->streams_list = 0;
 FUNC_1 (VAR_1);
 VAR_1 = 0;





 SPDBInfoStream *VAR_4 = 0;
 STpiStream *VAR_5 = 0;
 SDbiStream *VAR_6 = 0;
 SStreamParseFunc *VAR_7;
 R_PDB_STREAM *VAR_8 = 0;
 int VAR_9 = 0;






 VAR_2 = FUNC_7 (VAR_0->pdb_streams);
 while (FUNC_6 (VAR_2)) {
  switch (VAR_9) {
  case 1:
   VAR_4 = (SPDBInfoStream *) FUNC_5 (VAR_2);
   FUNC_2 (VAR_4);
   FUNC_1 (VAR_4);
   break;
  case 2:
   VAR_5 = (STpiStream *) FUNC_5 (VAR_2);
   FUNC_2 (VAR_5);
   FUNC_1 (VAR_5);
   break;
  case 3:
   VAR_6 = (SDbiStream *) FUNC_5 (VAR_2);
   FUNC_2 (VAR_6);
   FUNC_1 (VAR_6);
   break;
  default:
   FUNC_0 (VAR_0->pdb_streams2, VAR_9, &VAR_7);
   if (VAR_7) {
    break;
   }
   VAR_8 = (R_PDB_STREAM *) FUNC_5 (VAR_2);
   FUNC_2 (VAR_8);
   FUNC_1 (VAR_8);
   break;
  }
  VAR_9++;
 }

 FUNC_4 (VAR_0->pdb_streams);




 VAR_2 = FUNC_7 (VAR_0->pdb_streams2);
 while (FUNC_6 (VAR_2)) {
  VAR_7 = (SStreamParseFunc *) FUNC_5 (VAR_2);
  if (VAR_7->free) {
   VAR_7->free (VAR_7->stream);
   FUNC_1 (VAR_7->stream);
  }
  FUNC_1 (VAR_7);
 }

 FUNC_4 (VAR_0->pdb_streams2);


 FUNC_1 (VAR_0->stream_map);
 FUNC_3 (VAR_0->buf);



}
