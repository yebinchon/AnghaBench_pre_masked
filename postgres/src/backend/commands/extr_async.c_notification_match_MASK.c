
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ channel_len; scalar_t__ payload_len; int data; } ;
typedef int Size ;
typedef TYPE_1__ Notification ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(const void *VAR_0, const void *VAR_1, Size VAR_2)
{
 const Notification *VAR_3 = *(const Notification *const *) VAR_0;
 const Notification *VAR_4 = *(const Notification *const *) VAR_1;

 FUNC_0(VAR_2 == sizeof(Notification *));
 if (VAR_3->channel_len == VAR_4->channel_len &&
  VAR_3->payload_len == VAR_4->payload_len &&
  FUNC_1(VAR_3->data, VAR_4->data,
      VAR_3->channel_len + VAR_3->payload_len + 2) == 0)
  return 0;
 return 1;
}
