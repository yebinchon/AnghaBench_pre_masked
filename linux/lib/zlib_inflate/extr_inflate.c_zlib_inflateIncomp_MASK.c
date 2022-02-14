
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* next_out; scalar_t__ avail_in; scalar_t__ next_in; scalar_t__ total_in; scalar_t__ total_out; int adler; int avail_out; scalar_t__ state; } ;
typedef TYPE_1__ z_stream ;
typedef int uInt ;
struct inflate_state {scalar_t__ mode; scalar_t__ total; int check; } ;
typedef unsigned char Byte ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;

int FUNC_2(z_stream *VAR_4)
{
    struct inflate_state *VAR_5 = (struct inflate_state *)VAR_4->state;
    Byte *VAR_6 = VAR_4->next_out;
    uInt VAR_7 = VAR_4->avail_out;

    if (VAR_5->mode != VAR_1 && VAR_5->mode != VAR_0)
 return VAR_2;


    VAR_4->avail_out = 0;
    VAR_4->next_out = (unsigned char*)VAR_4->next_in + VAR_4->avail_in;

    FUNC_1(VAR_4, VAR_4->avail_in);


    VAR_4->avail_out = VAR_7;
    VAR_4->next_out = VAR_6;

    VAR_4->adler = VAR_5->check =
        FUNC_0(VAR_5->check, VAR_4->next_in, VAR_4->avail_in);

    VAR_4->total_out += VAR_4->avail_in;
    VAR_4->total_in += VAR_4->avail_in;
    VAR_4->next_in += VAR_4->avail_in;
    VAR_5->total += VAR_4->avail_in;
    VAR_4->avail_in = 0;

    return VAR_3;
}
