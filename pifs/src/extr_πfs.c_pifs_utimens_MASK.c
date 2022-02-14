
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_2__ {int mdd; } ;
typedef int DIR ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int * FUNC_3 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (int ,int ,struct timespec const*,int ) ;

__attribute__((used)) static int FUNC_5(const char *VAR_2, const struct timespec VAR_3[2])
{
  DIR *VAR_4 = FUNC_3(VAR_1.mdd);
  if (!VAR_4) {
    return -VAR_0;
  }
  int VAR_5 = FUNC_4(FUNC_2(VAR_4), FUNC_0((char *) VAR_2), VAR_3, 0);
  FUNC_1(VAR_4);
  return VAR_5 == -1 ? -VAR_0 : VAR_5;
}
