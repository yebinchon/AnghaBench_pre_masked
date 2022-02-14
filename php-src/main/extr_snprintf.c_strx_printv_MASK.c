
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int va_list ;
struct TYPE_3__ {char* buf_end; char* nextb; } ;
typedef TYPE_1__ buffy ;


 int FUNC_0 (TYPE_1__*,char const*,int ) ;

__attribute__((used)) static void FUNC_1(int *VAR_0, char *VAR_1, size_t VAR_2, const char *VAR_3, va_list VAR_4)
{
 buffy VAR_5;
 int VAR_6;






 if (VAR_2 == 0) {
  VAR_5.buf_end = (char *) ~0;
  VAR_5.nextb = (char *) ~0;
 } else {
  VAR_5.buf_end = &VAR_1[VAR_2-1];
  VAR_5.nextb = VAR_1;
 }




 VAR_6 = FUNC_0(&VAR_5, VAR_3, VAR_4);
 if (VAR_2 != 0 && VAR_5.nextb <= VAR_5.buf_end) {
  *(VAR_5.nextb) = '\0';
 }
 if (VAR_0) {
  *VAR_0 = VAR_6;
 }
}
