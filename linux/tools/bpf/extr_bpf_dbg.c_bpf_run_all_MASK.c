
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct sock_filter {int dummy; } ;
struct TYPE_4__ {int Rs; size_t Pc; int R; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct sock_filter*,int *,int ,int ) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*,struct sock_filter*,int *,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sock_filter *VAR_1, uint16_t VAR_2, uint8_t *VAR_3,
         uint32_t VAR_4, uint32_t VAR_5)
{
 bool VAR_6 = 0;

 while (VAR_0.Rs == 0 && VAR_6 == 0) {
  FUNC_2();

  if (FUNC_1(VAR_0.Pc))
   VAR_6 = FUNC_0(&VAR_0, VAR_1, VAR_3,
           VAR_4, VAR_5);

  FUNC_3(&VAR_0, &VAR_1[VAR_0.Pc], VAR_3, VAR_4,
    VAR_5);
  VAR_0.Pc++;
 }

 return VAR_6 ? -1 : VAR_0.R;
}
