
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {int flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct l2cap_chan *VAR_3)
{
 if (FUNC_0(VAR_0, &VAR_3->flags))
  return VAR_2;
 else
  return VAR_1;
}
