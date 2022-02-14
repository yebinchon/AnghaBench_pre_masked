
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_3__ {int len; int prefix; int * buf; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,int*) ;
 int FUNC_3 (char const*,int *) ;
 scalar_t__ FUNC_4 (int*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_9(const char *VAR_2) {
 const char *VAR_3 = VAR_2;
 if (!VAR_2) {
  VAR_0 = ((void*)0);
  return;
 }
 VAR_0 = &VAR_1;
 if (!FUNC_5 (VAR_2, "-")) {
  VAR_1.buf = (ut8 *)FUNC_4 (&VAR_1.len);
  return;
 }
 if (VAR_2[0] == '@') {
  VAR_1.buf = (ut8 *)FUNC_2 (VAR_2 + 1, &VAR_1.len);
  return;
 }
 VAR_1.buf = (ut8 *) FUNC_1 (FUNC_7 (VAR_2) + 128);
 if (!VAR_1.buf) {
  VAR_0 = ((void*)0);
  return;
 }
 if (*VAR_2 == '^') {
  VAR_1.prefix = 1;
  VAR_3++;
 } else {
  VAR_1.prefix = 0;
 }
 if (!FUNC_8 (VAR_3, "s:", 2)) {
  FUNC_6 ((char *) VAR_1.buf, VAR_3 + 2);
  VAR_1.len = FUNC_7 (VAR_3 + 2);
 } else {
  VAR_1.len = FUNC_3 (VAR_3, VAR_1.buf);
  if (VAR_1.len < 1) {
   FUNC_6 ((char *) VAR_1.buf, VAR_3);
   VAR_1.len = FUNC_7 (VAR_3);
   FUNC_0 ("Warning: This is not an hexpair, assuming a string, prefix it with 's:' to skip this message.");
  }
 }
}
