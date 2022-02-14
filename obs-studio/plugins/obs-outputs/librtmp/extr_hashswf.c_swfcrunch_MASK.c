
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uInt ;
struct info {int zlib; int size; int ctx; TYPE_1__* zs; scalar_t__ first; } ;
struct TYPE_2__ {unsigned char* next_in; scalar_t__ avail_out; unsigned char* next_out; scalar_t__ avail_in; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned char*,size_t) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static size_t
FUNC_3(void *VAR_2, size_t VAR_3, size_t VAR_4, void *VAR_5)
{
    struct info *VAR_6 = VAR_5;
    char *VAR_7 = VAR_2;
    size_t VAR_8 = VAR_3 * VAR_4;

    if (VAR_6->first)
    {
        VAR_6->first = 0;

        if (!FUNC_2(VAR_7, "CWS", 3))
        {
            *VAR_7 = 'F';
            VAR_6->zlib = 1;
        }
        FUNC_0(VAR_6->ctx, (unsigned char *)VAR_7, 8);
        VAR_7 += 8;
        VAR_8 -= 8;
        VAR_6->size = 8;
    }

    if (VAR_6->zlib)
    {
        unsigned char VAR_9[VAR_0];
        VAR_6->zs->next_in = (unsigned char *)VAR_7;
        VAR_6->zs->avail_in = (uInt)VAR_8;
        do
        {
            VAR_6->zs->avail_out = VAR_0;
            VAR_6->zs->next_out = VAR_9;
            FUNC_1(VAR_6->zs, VAR_1);
            VAR_8 = VAR_0 - VAR_6->zs->avail_out;
            VAR_6->size += (int)VAR_8;
            FUNC_0(VAR_6->ctx, VAR_9, VAR_8);
        }
        while (VAR_6->zs->avail_out == 0);
    }
    else
    {
        VAR_6->size += (int)VAR_8;
        FUNC_0(VAR_6->ctx, (unsigned char *)VAR_7, VAR_8);
    }
    return VAR_3 * VAR_4;
}
