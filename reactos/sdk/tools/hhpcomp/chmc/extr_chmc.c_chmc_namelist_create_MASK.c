
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct chmcSection {int* name; } ;
struct chmcFile {int sections_num; struct chmcSection** sections; } ;
typedef int UInt16 ;
typedef int UChar ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct chmcFile*,char*,int ,int *,int) ;
 int* FUNC_1 (int) ;
 int FUNC_2 (int*) ;

int FUNC_3(struct chmcFile *VAR_2, int VAR_3)
{
 UInt16 *VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  struct chmcSection *VAR_5;
  int VAR_6, VAR_7, VAR_8, VAR_9;

  VAR_8 = 0;
  VAR_4[VAR_8++] = VAR_3 >> 1;
  VAR_4[VAR_8++] = VAR_2->sections_num;
  for( VAR_6=0; VAR_6 < VAR_2->sections_num; VAR_6++ ) {
   VAR_5 = VAR_2->sections[VAR_6];

   VAR_9 = FUNC_2(VAR_5->name);
   VAR_4[VAR_8++] = VAR_9;
   for( VAR_7=0; VAR_7 < VAR_9; VAR_7++ )
    VAR_4[VAR_8++] = VAR_5->name[VAR_7];
   VAR_4[VAR_8++] = 0;
  }
  FUNC_0(VAR_2, "::DataSpace/NameList", 0, (UChar *)VAR_4, VAR_3);
 }
 else
  return VAR_0;

 return VAR_1;
}
