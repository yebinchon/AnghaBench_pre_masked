
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int* use_list; int start; int* renumber_map; int* rev_renumber_map; int page_object_lists; } ;
typedef TYPE_1__ pdf_write_state ;
typedef int pdf_document ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,TYPE_1__*) ;
 int FUNC_1 (int ,char*,...) ;
 int* FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int*,int,int*,int *) ;
 int FUNC_5 (int *,int *,TYPE_1__*,int ) ;
 int FUNC_6 (int*,int ,int) ;
 int VAR_1 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,int *,TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_14(fz_context *VAR_3, pdf_document *VAR_4, pdf_write_state *VAR_5)
{
 int VAR_6;
 int VAR_7 = FUNC_12(VAR_3, VAR_4) + 2;
 int *VAR_8;
 int *VAR_9;

 VAR_5->page_object_lists = FUNC_7(VAR_3);





 FUNC_10(VAR_3, VAR_4);


 FUNC_6(VAR_5->use_list, 0, VAR_7 * sizeof(int));
 FUNC_5(VAR_3, VAR_4, VAR_5, FUNC_11(VAR_3, VAR_4));


 FUNC_0(VAR_3, VAR_4, VAR_5);
 VAR_8 = FUNC_2(VAR_3, VAR_7, sizeof(int));
 VAR_9 = FUNC_2(VAR_3, VAR_7, sizeof(int));
 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
 {
  VAR_8[VAR_6] = VAR_6;
 }


 FUNC_4(VAR_8+1, VAR_7-1, VAR_5->use_list, &VAR_1);
 for (VAR_6 = 1; (VAR_5->use_list[VAR_8[VAR_6]] & VAR_0) == 0; VAR_6++) {}
 VAR_5->start = VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
 {
  VAR_5->renumber_map[VAR_8[VAR_6]] = VAR_6;
  VAR_9[VAR_6] = VAR_5->rev_renumber_map[VAR_8[VAR_6]];
 }
 FUNC_3(VAR_3, VAR_5->rev_renumber_map);
 VAR_5->rev_renumber_map = VAR_9;
 FUNC_3(VAR_3, VAR_8);


 FUNC_8(VAR_5);
 FUNC_13(VAR_3, VAR_4, VAR_5);

 FUNC_9(VAR_3, VAR_5->page_object_lists);
}
