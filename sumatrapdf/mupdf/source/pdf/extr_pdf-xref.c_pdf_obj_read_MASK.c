
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {char type; int gen; int num; void* stm_ofs; void* ofs; scalar_t__ obj; } ;
typedef TYPE_2__ pdf_xref_entry ;
typedef int pdf_obj ;
struct TYPE_15__ {int i; } ;
typedef TYPE_3__ pdf_lexbuf ;
struct TYPE_13__ {TYPE_3__ base; } ;
struct TYPE_16__ {size_t linear_page_num; int file; int ** linear_page_refs; TYPE_1__ lexbuf; } ;
typedef TYPE_4__ pdf_document ;
typedef void* int64_t ;
typedef int fz_context ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ,void*,int ) ;
 void* FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,char*,...) ;
 TYPE_2__* FUNC_4 (int *,TYPE_4__*,int) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ,TYPE_3__*) ;
 int * FUNC_7 (int *,TYPE_4__*,int,int) ;
 int FUNC_8 (int *,TYPE_4__*,TYPE_3__*,void**,int *,int *,int *,int **,void**,int *) ;
 int FUNC_9 (int *,TYPE_4__*) ;

__attribute__((used)) static int
FUNC_10(fz_context *VAR_5, pdf_document *VAR_6, int64_t *VAR_7, int *VAR_8, pdf_obj **VAR_9)
{
 pdf_lexbuf *VAR_10 = &VAR_6->lexbuf.base;
 int VAR_11, VAR_12, VAR_13;
 int64_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19;
 pdf_xref_entry *VAR_20;

 VAR_14 = *VAR_7;
 FUNC_1(VAR_5, VAR_6->file, VAR_14, VAR_4);


 VAR_13 = FUNC_6(VAR_5, VAR_6->file, VAR_10);
 VAR_15 = FUNC_2(VAR_5, VAR_6->file);
 if (VAR_13 != VAR_2)
 {

  FUNC_0((VAR_5, "skipping unexpected data (tok=%d) at %d", VAR_13, *VAR_7));
  *VAR_7 = VAR_15;
  return VAR_13 == VAR_1;
 }
 *VAR_8 = VAR_11 = VAR_10->i;


 VAR_13 = FUNC_6(VAR_5, VAR_6->file, VAR_10);
 VAR_17 = FUNC_2(VAR_5, VAR_6->file);
 if (VAR_13 != VAR_2)
 {

  FUNC_0((VAR_5, "skipping unexpected data after \"%d\" (tok=%d) at %d", VAR_11, VAR_13, *VAR_7));
  *VAR_7 = VAR_17;
  return VAR_13 == VAR_1;
 }
 VAR_12 = VAR_10->i;


 do
 {
  VAR_17 = FUNC_2(VAR_5, VAR_6->file);
  VAR_13 = FUNC_6(VAR_5, VAR_6->file, VAR_10);
  if (VAR_13 == VAR_3)
   break;
  if (VAR_13 != VAR_2)
  {
   FUNC_0((VAR_5, "skipping unexpected data (tok=%d) at %d", VAR_13, VAR_17));
   *VAR_7 = FUNC_2(VAR_5, VAR_6->file);
   return VAR_13 == VAR_1;
  }
  FUNC_0((VAR_5, "skipping unexpected int %d at %d", VAR_11, VAR_14));
  *VAR_8 = VAR_11 = VAR_12;
  VAR_14 = VAR_15;
  VAR_12 = VAR_10->i;
  VAR_15 = VAR_17;
 }
 while (1);


 VAR_19 = FUNC_9(VAR_5, VAR_6);
 VAR_13 = FUNC_8(VAR_5, VAR_6, VAR_10, &VAR_16, ((void*)0), ((void*)0), ((void*)0), VAR_9, &VAR_18, ((void*)0));

 do
 {
  if (VAR_11 <= 0 || VAR_11 >= VAR_19)
  {
   FUNC_3(VAR_5, "Not a valid object number (%d %d obj)", VAR_11, VAR_12);
   break;
  }
  if (VAR_12 != 0)
  {
   FUNC_3(VAR_5, "Unexpected non zero generation number in linearized file");
  }
  VAR_20 = FUNC_4(VAR_5, VAR_6, VAR_11);
  if (VAR_20->type != 0)
  {
   FUNC_0((VAR_5, "Duplicate object found (%d %d obj)", VAR_11, VAR_12));
   break;
  }
  if (VAR_9 && *VAR_9)
  {
   FUNC_0((VAR_5, "Successfully read object %d @ %d - and found page %d!", VAR_11, VAR_14, VAR_6->linear_page_num));
   if (!VAR_20->obj)
    VAR_20->obj = FUNC_5(VAR_5, *VAR_9);

   if (VAR_6->linear_page_refs[VAR_6->linear_page_num] == ((void*)0))
    VAR_6->linear_page_refs[VAR_6->linear_page_num] = FUNC_7(VAR_5, VAR_6, VAR_11, VAR_12);
  }
  else
  {
   FUNC_0((VAR_5, "Successfully read object %d @ %d", VAR_11, VAR_14));
  }
  VAR_20->type = 'n';
  VAR_20->gen = VAR_12;
  VAR_20->num = VAR_11;
  VAR_20->ofs = VAR_14;
  VAR_20->stm_ofs = VAR_16;
 }
 while (0);
 if (VAR_9 && *VAR_9)
  VAR_6->linear_page_num++;

 if (VAR_13 == VAR_0)
 {
  *VAR_7 = FUNC_2(VAR_5, VAR_6->file);
 }
 else
 {
  *VAR_7 = VAR_18;
 }
 return 0;
}
