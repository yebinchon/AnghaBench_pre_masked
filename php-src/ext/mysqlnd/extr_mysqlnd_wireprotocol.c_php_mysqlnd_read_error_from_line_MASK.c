
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char zend_uchar ;
typedef int enum_func_status ;


 unsigned int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 size_t FUNC_2 (int,int) ;
 size_t const VAR_2 ;
 int FUNC_3 (char*,char const*,size_t const) ;
 unsigned int FUNC_4 (char const*) ;
 char const* VAR_3 ;

__attribute__((used)) static enum_func_status
FUNC_5(const zend_uchar * const VAR_4, const size_t VAR_5,
         char *VAR_6, const size_t VAR_7,
         unsigned int *VAR_8, char *VAR_9)
{
 const zend_uchar *VAR_10 = VAR_4;
 size_t VAR_11 = 0;

 FUNC_0("php_mysqlnd_read_error_from_line");

 *VAR_8 = VAR_0;
 FUNC_3(VAR_9, VAR_3, VAR_2);

 if (VAR_5 > 2) {
  *VAR_8 = FUNC_4(VAR_10);
  VAR_10+= 2;




  if (*VAR_10 == '#') {
   ++VAR_10;
   if ((VAR_5 - (VAR_10 - VAR_4)) >= VAR_2) {
    FUNC_3(VAR_9, VAR_10, VAR_2);
    VAR_10+= VAR_2;
   } else {
    goto end;
   }
  }
  if ((VAR_5 - (VAR_10 - VAR_4)) > 0) {
   VAR_11 = FUNC_2((int)((VAR_5 - (VAR_10 - VAR_4))), (int) (VAR_7 - 1));
   FUNC_3(VAR_6, VAR_10, VAR_11);
  }
 }
end:
 VAR_9[VAR_2] = '\0';
 VAR_6[VAR_11]= '\0';

 FUNC_1(VAR_1);
}
