
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (char*,int,int) ;

__attribute__((used)) static char *
FUNC_2(char *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6,
    VAR_7,
    VAR_8;

 VAR_8 = FUNC_0(VAR_4);
 VAR_7 = VAR_8 / VAR_1;
 VAR_8 -= VAR_7 * VAR_1;
 VAR_6 = VAR_7 / VAR_0;
 VAR_7 -= VAR_6 * VAR_0;


 *VAR_3++ = (VAR_4 <= 0 ? '+' : '-');

 if (VAR_8 != 0)
 {
  VAR_3 = FUNC_1(VAR_3, VAR_6, 2);
  *VAR_3++ = ':';
  VAR_3 = FUNC_1(VAR_3, VAR_7, 2);
  *VAR_3++ = ':';
  VAR_3 = FUNC_1(VAR_3, VAR_8, 2);
 }
 else if (VAR_7 != 0 || VAR_5 == VAR_2)
 {
  VAR_3 = FUNC_1(VAR_3, VAR_6, 2);
  *VAR_3++ = ':';
  VAR_3 = FUNC_1(VAR_3, VAR_7, 2);
 }
 else
  VAR_3 = FUNC_1(VAR_3, VAR_6, 2);
 return VAR_3;
}
