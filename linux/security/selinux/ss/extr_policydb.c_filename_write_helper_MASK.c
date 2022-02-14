
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct filename_trans_datum {int otype; } ;
struct filename_trans {int stype; int ttype; int tclass; int * name; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int,void*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, void *VAR_1, void *VAR_2)
{
 __le32 VAR_3[4];
 struct filename_trans *VAR_4 = VAR_0;
 struct filename_trans_datum *VAR_5 = VAR_1;
 void *VAR_6 = VAR_2;
 int VAR_7;
 u32 VAR_8;

 VAR_8 = FUNC_2(VAR_4->name);
 VAR_3[0] = FUNC_0(VAR_8);
 VAR_7 = FUNC_1(VAR_3, sizeof(u32), 1, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_4->name, sizeof(char), VAR_8, VAR_6);
 if (VAR_7)
  return VAR_7;

 VAR_3[0] = FUNC_0(VAR_4->stype);
 VAR_3[1] = FUNC_0(VAR_4->ttype);
 VAR_3[2] = FUNC_0(VAR_4->tclass);
 VAR_3[3] = FUNC_0(VAR_5->otype);

 VAR_7 = FUNC_1(VAR_3, sizeof(u32), 4, VAR_6);
 if (VAR_7)
  return VAR_7;

 return 0;
}
