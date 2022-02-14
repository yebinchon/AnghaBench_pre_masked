
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int max_fragment_len_mode; } ;
struct TYPE_5__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL_SESSION ;



uint8_t FUNC_0(const SSL_SESSION *VAR_0)
{
    return VAR_0->ext.max_fragment_len_mode;
}
