
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dstr {int dummy; } ;
struct TYPE_3__ {int modifiers; scalar_t__ key; } ;
typedef TYPE_1__ obs_key_combination_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__,struct dstr*) ;

void FUNC_1(obs_key_combination_t VAR_9,
    struct dstr *VAR_10)
{
 if ((VAR_9.modifiers & VAR_2) != 0) {
  FUNC_0(VAR_5, VAR_10);
 }
 if ((VAR_9.modifiers & VAR_1) != 0) {
  FUNC_0(VAR_6, VAR_10);
 }
 if ((VAR_9.modifiers & VAR_0) != 0) {
  FUNC_0(VAR_4, VAR_10);
 }
 if ((VAR_9.modifiers & VAR_3) != 0) {
  FUNC_0(VAR_8, VAR_10);
 }
 if (VAR_9.key != VAR_7) {
  FUNC_0(VAR_9.key, VAR_10);
 }
}
