
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_bool ;
typedef int va_list ;
struct TYPE_3__ {char* buf_end; char* nextb; } ;
typedef TYPE_1__ buffy ;


 int FUNC_0 (TYPE_1__*,char const*,int ,int ) ;

__attribute__((used)) static void FUNC_1(int *VAR_0, char *VAR_1, size_t VAR_2, const char *VAR_3, zend_bool VAR_4, va_list VAR_5) {
 buffy VAR_6;
 int VAR_7;






 if (VAR_2 == 0) {
  VAR_6.buf_end = (char *) ~0;
  VAR_6.nextb = (char *) ~0;
 } else {
  VAR_6.buf_end = &VAR_1[VAR_2-1];
  VAR_6.nextb = VAR_1;
 }




 VAR_7 = FUNC_0(&VAR_6, VAR_3, VAR_4, VAR_5);
 if (VAR_2 != 0 && VAR_6.nextb <= VAR_6.buf_end) {
  *(VAR_6.nextb) = '\0';
 }
 if (VAR_0) {
  *VAR_0 = VAR_7;
 }
}
