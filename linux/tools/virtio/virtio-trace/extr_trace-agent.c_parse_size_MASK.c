
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (char*) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static unsigned long FUNC_2(const char *VAR_3)
{
 unsigned long VAR_4, VAR_5;
 char *VAR_6;

 VAR_4 = FUNC_1(VAR_3, &VAR_6, 10);
 switch (*VAR_6) {
 case 'K': case 'k':
  VAR_4 <<= 10;
  break;
 case 'M': case 'm':
  VAR_4 <<= 20;
  break;
 default:
  break;
 }

 if (VAR_4 > VAR_1) {
  FUNC_0("Pipe size must be less than 1MB\n");
  goto error;
 } else if (VAR_4 < VAR_2) {
  FUNC_0("Pipe size must be over 64KB\n");
  goto error;
 }


 VAR_5 = VAR_4 & (VAR_0 - 1);
 VAR_4 = VAR_4 - VAR_5;

 return VAR_4;
error:
 return 0;
}
