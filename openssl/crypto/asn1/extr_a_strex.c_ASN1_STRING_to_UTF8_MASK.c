
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int type; unsigned char* data; int length; scalar_t__ flags; } ;
typedef TYPE_1__ ASN1_STRING ;


 int FUNC_0 (TYPE_1__**,unsigned char*,int,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

int FUNC_1(unsigned char **VAR_3, const ASN1_STRING *VAR_4)
{
    ASN1_STRING VAR_5, *VAR_6 = &VAR_5;
    int VAR_7, VAR_8, VAR_9;
    if (!VAR_4)
        return -1;
    VAR_8 = VAR_4->type;
    if ((VAR_8 < 0) || (VAR_8 > 30))
        return -1;
    VAR_7 = VAR_2[VAR_8];
    if (VAR_7 == -1)
        return -1;
    VAR_7 |= VAR_1;
    VAR_5.data = ((void*)0);
    VAR_5.length = 0;
    VAR_5.flags = 0;
    VAR_9 =
        FUNC_0(&VAR_6, VAR_4->data, VAR_4->length, VAR_7,
                           VAR_0);
    if (VAR_9 < 0)
        return VAR_9;
    *VAR_3 = VAR_5.data;
    return VAR_5.length;
}
