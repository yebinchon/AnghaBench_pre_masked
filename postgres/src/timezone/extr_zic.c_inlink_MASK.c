
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct link {void* l_to; void* l_from; int l_linenum; int l_filename; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 struct link* FUNC_3 (struct link*,int,int ,int *) ;
 int VAR_4 ;
 struct link* VAR_5 ;
 int FUNC_4 (char*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_5(char **VAR_8, int VAR_9)
{
 struct link VAR_10;

 if (VAR_9 != VAR_2)
 {
  FUNC_2(FUNC_0("wrong number of fields on Link line"));
  return;
 }
 if (*VAR_8[VAR_0] == '\0')
 {
  FUNC_2(FUNC_0("blank FROM field on Link line"));
  return;
 }
 if (!FUNC_4(VAR_8[VAR_1]))
  return;
 VAR_10.l_filename = VAR_3;
 VAR_10.l_linenum = VAR_4;
 VAR_10.l_from = FUNC_1(VAR_8[VAR_0]);
 VAR_10.l_to = FUNC_1(VAR_8[VAR_1]);
 VAR_5 = FUNC_3(VAR_5, sizeof *VAR_5, VAR_6, &VAR_7);
 VAR_5[VAR_6++] = VAR_10;
}
