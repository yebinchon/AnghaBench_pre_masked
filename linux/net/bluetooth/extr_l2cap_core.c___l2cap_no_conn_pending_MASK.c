
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct l2cap_chan {scalar_t__ chan_type; int conf_state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int *) ;

__attribute__((used)) static inline int FUNC_1(struct l2cap_chan *VAR_2)
{
 if (VAR_2->chan_type != VAR_1)
  return 1;

 return !FUNC_0(VAR_0, &VAR_2->conf_state);
}
