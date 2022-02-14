
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int leaf_type; scalar_t__ type_info; } ;
struct TYPE_8__ {int ti_min; int ti_max; } ;
struct TYPE_10__ {int types; TYPE_1__ header; } ;
struct TYPE_9__ {int tpi_idx; TYPE_6__ type_data; } ;
typedef TYPE_2__ SType ;
typedef TYPE_3__ STpiStream ;
typedef int STPIHeader ;
typedef int R_STREAM_FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_6__*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int,char*) ;

int FUNC_7(void *VAR_3, R_STREAM_FILE *VAR_4) {
 int VAR_5;
 SType *VAR_6 = 0;
 STpiStream *VAR_7 = (STpiStream *) VAR_3;
 VAR_7->types = FUNC_5 ();
 VAR_2 = VAR_7->types;

 FUNC_6(VAR_4, sizeof(STPIHeader), (char *)&VAR_7->header);

 VAR_0 = VAR_7->header.ti_min;

 for (VAR_5 = VAR_7->header.ti_min; VAR_5 < VAR_7->header.ti_max; VAR_5++) {
  VAR_6 = (SType *) FUNC_2 (sizeof (SType));
  if (!VAR_6) {
   return 0;
  }
  VAR_6->tpi_idx = VAR_5;
  VAR_6->type_data.type_info = 0;
  VAR_6->type_data.leaf_type = VAR_1;
  FUNC_1(&VAR_6->type_data);
  if (!FUNC_3(VAR_4, VAR_6)) {
   FUNC_0 (VAR_6);
   return 0;
  }
  FUNC_4(VAR_7->types, VAR_6);
 }
 return 1;
}
