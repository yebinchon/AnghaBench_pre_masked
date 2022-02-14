
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int va_list ;
typedef scalar_t__ ut32 ;
struct TYPE_6__ {int * buf; } ;
struct TYPE_7__ {int error; scalar_t__ haderr; TYPE_1__ o; } ;
typedef TYPE_2__ RMagic ;


 int FUNC_0 (TYPE_2__*,char*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*,char const*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(RMagic *VAR_0, int VAR_1, const char *VAR_2, va_list VAR_3, ut32 VAR_4) {

 if (!VAR_0 || VAR_0->haderr) {
  return;
 }
 if (VAR_4 != 0) {
  FUNC_2(VAR_0->o.buf);
  VAR_0->o.buf = ((void*)0);
  (void)FUNC_0 (VAR_0, "line %u: ", VAR_4);
 }

        FUNC_1 (VAR_0, VAR_2, VAR_3);
 if (VAR_1 > 0) {
  (void)FUNC_0 (VAR_0, " (%s)", FUNC_3 (VAR_1));
 }
 VAR_0->haderr++;
 VAR_0->error = VAR_1;
}
