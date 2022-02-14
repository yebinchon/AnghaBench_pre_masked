
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char FUNC_0 (int) ;
 int FUNC_1 (char*,char const* const,int) ;

__attribute__((used)) static char *FUNC_2(mode_t VAR_3)
{
 static const char * const VAR_4[] = {"---", "--x", "-w-", "-wx", "r--", "r-x", "rw-", "rwx"};
 static char VAR_5[11] = {'\0'};

 VAR_5[0] = FUNC_0(VAR_3);
 FUNC_1(&VAR_5[1], VAR_4[(VAR_3 >> 6) & 7], 4);
 FUNC_1(&VAR_5[4], VAR_4[(VAR_3 >> 3) & 7], 4);
 FUNC_1(&VAR_5[7], VAR_4[(VAR_3 & 7)], 4);

 if (VAR_3 & VAR_1)
  VAR_5[3] = (VAR_3 & 0100) ? 's' : 'S';
 if (VAR_3 & VAR_0)
  VAR_5[6] = (VAR_3 & 0010) ? 's' : 'l';
 if (VAR_3 & VAR_2)
  VAR_5[9] = (VAR_3 & 0001) ? 't' : 'T';

 return VAR_5;
}
