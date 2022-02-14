
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_2__ {scalar_t__ payload_len; scalar_t__ channel_len; scalar_t__ data; } ;
typedef int Size ;
typedef TYPE_1__ Notification ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned char const*,scalar_t__) ;

__attribute__((used)) static uint32
FUNC_3(const void *VAR_0, Size VAR_1)
{
 const Notification *VAR_2 = *(const Notification *const *) VAR_0;

 FUNC_0(VAR_1 == sizeof(Notification *));

 return FUNC_1(FUNC_2((const unsigned char *) VAR_2->data,
           VAR_2->channel_len + VAR_2->payload_len + 1));
}
