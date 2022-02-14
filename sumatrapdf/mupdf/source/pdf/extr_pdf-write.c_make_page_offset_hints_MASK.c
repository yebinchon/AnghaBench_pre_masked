
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int file_len; int* ofs_list; int start; int main_xref_offset; int* use_list; int page_count; int hints_shared_offset; TYPE_1__* page_object_lists; } ;
typedef TYPE_2__ pdf_write_state ;
typedef int pdf_document ;
struct TYPE_7__ {int num_objects; int min_ofs; int max_ofs; int len; size_t* object; int num_shared; size_t page_object_number; } ;
typedef TYPE_3__ page_objects ;
typedef int int64_t ;
typedef int fz_context ;
typedef int fz_buffer ;
struct TYPE_5__ {TYPE_3__** page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int,int) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_6, pdf_document *VAR_7, pdf_write_state *VAR_8, fz_buffer *VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12, VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;
 int VAR_17, VAR_18;
 int VAR_19 = 0;
 int VAR_20, VAR_21;
 page_objects **VAR_22 = &VAR_8->page_object_lists->page[0];
 int VAR_23, VAR_24, VAR_25;
 int VAR_26;
 int VAR_27 = FUNC_5(VAR_6, VAR_7);

 VAR_17 = FUNC_5(VAR_6, VAR_7);
 VAR_18 = 1;
 VAR_20 = VAR_8->file_len;
 VAR_21 = 0;
 for (VAR_10=1; VAR_10 < VAR_27; VAR_10++)
 {
  int VAR_28, VAR_29, VAR_30;

  VAR_28 = VAR_8->ofs_list[VAR_10];
  if (VAR_10 == VAR_8->start-1 || (VAR_8->start == 1 && VAR_10 == VAR_27-1))
   VAR_29 = VAR_8->main_xref_offset;
  else if (VAR_10 == VAR_27-1)
   VAR_29 = VAR_8->ofs_list[1];
  else
   VAR_29 = VAR_8->ofs_list[VAR_10+1];

  FUNC_0(VAR_29 > VAR_28);

  if (VAR_8->use_list[VAR_10] & VAR_5)
  {
   VAR_30 = -1;
   if (VAR_10 < VAR_17)
    VAR_17 = VAR_10;
   if (VAR_10 > VAR_18)
    VAR_18 = VAR_10;
   if (VAR_20 > VAR_29 - VAR_28)
    VAR_20 = VAR_29 - VAR_28;
   if (VAR_21 < VAR_29 - VAR_28)
    VAR_21 = VAR_29 - VAR_28;
  }
  else if (VAR_8->use_list[VAR_10] & (VAR_0 | VAR_1 | VAR_4))
   VAR_30 = -1;
  else if (VAR_8->use_list[VAR_10] & VAR_2)
  {
   VAR_30 = 0;
   if (VAR_20 > VAR_29 - VAR_28)
    VAR_20 = VAR_29 - VAR_28;
   if (VAR_21 < VAR_29 - VAR_28)
    VAR_21 = VAR_29 - VAR_28;
  }
  else if (VAR_8->use_list[VAR_10] == 0)
   VAR_30 = -1;
  else
   VAR_30 = VAR_8->use_list[VAR_10]>>VAR_3;

  if (VAR_30 >= 0)
  {
   VAR_22[VAR_30]->num_objects++;
   if (VAR_22[VAR_30]->min_ofs > VAR_28)
    VAR_22[VAR_30]->min_ofs = VAR_28;
   if (VAR_22[VAR_30]->max_ofs < VAR_29)
    VAR_22[VAR_30]->max_ofs = VAR_29;
  }
 }

 VAR_12 = VAR_13 = VAR_22[0]->num_objects;
 VAR_14 = VAR_15 = VAR_22[0]->max_ofs - VAR_22[0]->min_ofs;
 for (VAR_10=1; VAR_10 < VAR_8->page_count; VAR_10++)
 {
  int VAR_31;
  if (VAR_12 > VAR_22[VAR_10]->num_objects)
   VAR_12 = VAR_22[VAR_10]->num_objects;
  if (VAR_13 < VAR_22[VAR_10]->num_objects)
   VAR_13 = VAR_22[VAR_10]->num_objects;
  VAR_31 = VAR_22[VAR_10]->max_ofs - VAR_22[VAR_10]->min_ofs;
  if (VAR_31 < VAR_14)
   VAR_14 = VAR_31;
  if (VAR_31 > VAR_15)
   VAR_15 = VAR_31;
 }

 for (VAR_10=0; VAR_10 < VAR_8->page_count; VAR_10++)
 {
  int VAR_32 = 0;
  page_objects *VAR_33 = VAR_8->page_object_lists->page[VAR_10];
  for (VAR_11 = 0; VAR_11 < VAR_33->len; VAR_11++)
  {
   if (VAR_10 == 0 && VAR_8->use_list[VAR_33->object[VAR_11]] & VAR_2)
    VAR_32++;
   else if (VAR_10 != 0 && VAR_8->use_list[VAR_33->object[VAR_11]] & VAR_5)
    VAR_32++;
  }
  VAR_33->num_shared = VAR_32;
  if (VAR_10 == 0 || VAR_32 > VAR_19)
   VAR_19 = VAR_32;
 }
 if (VAR_17 > VAR_18)
  VAR_17 = VAR_18 = 0;



 FUNC_1(VAR_6, VAR_9, VAR_12, 32);

 FUNC_1(VAR_6, VAR_9, VAR_8->ofs_list[VAR_22[0]->page_object_number], 32);


 VAR_16 = FUNC_4(VAR_13 - VAR_12);
 FUNC_1(VAR_6, VAR_9, VAR_16, 16);

 FUNC_1(VAR_6, VAR_9, VAR_14, 32);


 VAR_23 = FUNC_4(VAR_15 - VAR_14);
 FUNC_1(VAR_6, VAR_9, VAR_23, 16);


 FUNC_1(VAR_6, VAR_9, 0, 32);



 FUNC_1(VAR_6, VAR_9, 0, 16);


 FUNC_1(VAR_6, VAR_9, 0, 32);



 FUNC_1(VAR_6, VAR_9, VAR_23, 16);


 VAR_24 = FUNC_4(VAR_19);
 FUNC_1(VAR_6, VAR_9, VAR_24, 16);


 VAR_25 = FUNC_4(VAR_18 - VAR_17 + VAR_22[0]->num_shared);
 FUNC_1(VAR_6, VAR_9, VAR_25, 16);


 FUNC_1(VAR_6, VAR_9, 0, 16);


 FUNC_1(VAR_6, VAR_9, 0, 16);




 for (VAR_10 = 0; VAR_10 < VAR_8->page_count; VAR_10++)
 {
  FUNC_1(VAR_6, VAR_9, VAR_22[VAR_10]->num_objects - VAR_12, VAR_16);
 }
 FUNC_2(VAR_6, VAR_9);


 for (VAR_10 = 0; VAR_10 < VAR_8->page_count; VAR_10++)
 {
  FUNC_1(VAR_6, VAR_9, VAR_22[VAR_10]->max_ofs - VAR_22[VAR_10]->min_ofs - VAR_14, VAR_23);
 }
 FUNC_2(VAR_6, VAR_9);

 for (VAR_10 = 0; VAR_10 < VAR_8->page_count; VAR_10++)
 {
  FUNC_1(VAR_6, VAR_9, VAR_22[VAR_10]->num_shared, VAR_24);
 }
 FUNC_2(VAR_6, VAR_9);



 for (VAR_10 = 0; VAR_10 < VAR_8->page_count; VAR_10++)
 {
  for (VAR_11 = 0; VAR_11 < VAR_22[VAR_10]->len; VAR_11++)
  {
   int VAR_34 = VAR_22[VAR_10]->object[VAR_11];
   if (VAR_10 == 0 && VAR_8->use_list[VAR_34] & VAR_2)
    FUNC_1(VAR_6, VAR_9, 0 , VAR_25);
   if (VAR_10 != 0 && VAR_8->use_list[VAR_34] & VAR_5)
    FUNC_1(VAR_6, VAR_9, VAR_34 - VAR_17 + VAR_22[0]->num_shared, VAR_25);
  }
 }
 FUNC_2(VAR_6, VAR_9);
 for (VAR_10 = 0; VAR_10 < VAR_8->page_count; VAR_10++)
 {
  FUNC_1(VAR_6, VAR_9, VAR_22[VAR_10]->max_ofs - VAR_22[VAR_10]->min_ofs - VAR_14, VAR_23);
 }


 FUNC_2(VAR_6, VAR_9);
 VAR_8->hints_shared_offset = (int)FUNC_3(VAR_6, VAR_9, ((void*)0));




 FUNC_1(VAR_6, VAR_9, VAR_17, 32);


 FUNC_1(VAR_6, VAR_9, VAR_8->ofs_list[VAR_17], 32);


 FUNC_1(VAR_6, VAR_9, VAR_22[0]->num_shared, 32);


 FUNC_1(VAR_6, VAR_9, VAR_18 - VAR_17 + VAR_22[0]->num_shared, 32);


 FUNC_1(VAR_6, VAR_9, 0, 16);

 FUNC_1(VAR_6, VAR_9, VAR_20, 32);



 VAR_26 = FUNC_4(VAR_21 - VAR_20);
 FUNC_1(VAR_6, VAR_9, VAR_26, 16);



 for (VAR_11 = 0; VAR_11 < VAR_22[0]->len; VAR_11++)
 {
  int VAR_35 = VAR_22[0]->object[VAR_11];
  int64_t VAR_36, VAR_37;
  VAR_36 = VAR_8->ofs_list[VAR_35];
  if (VAR_35 == VAR_8->start-1)
   VAR_37 = VAR_8->main_xref_offset;
  else if (VAR_35 < VAR_27-1)
   VAR_37 = VAR_8->ofs_list[VAR_35+1];
  else
   VAR_37 = VAR_8->ofs_list[1];
  if (VAR_8->use_list[VAR_35] & VAR_2)
   FUNC_1(VAR_6, VAR_9, VAR_37 - VAR_36 - VAR_20, VAR_26);
 }

 for (VAR_10 = VAR_17; VAR_10 <= VAR_18; VAR_10++)
 {
  int VAR_38, VAR_39;
  VAR_38 = VAR_8->ofs_list[VAR_10];
  if (VAR_10 == VAR_8->start-1)
   VAR_39 = VAR_8->main_xref_offset;
  else if (VAR_10 < VAR_27-1)
   VAR_39 = VAR_8->ofs_list[VAR_10+1];
  else
   VAR_39 = VAR_8->ofs_list[1];
  FUNC_1(VAR_6, VAR_9, VAR_39 - VAR_38 - VAR_20, VAR_26);
 }
 FUNC_2(VAR_6, VAR_9);


 for (VAR_10 = VAR_18 - VAR_17 + VAR_22[0]->num_shared; VAR_10 > 0; VAR_10--)
 {
  FUNC_1(VAR_6, VAR_9, 0, 1);
 }
 FUNC_2(VAR_6, VAR_9);

 FUNC_2(VAR_6, VAR_9);

}
