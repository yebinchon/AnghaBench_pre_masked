
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint16_t ;
struct TYPE_2__ {int num; } ;
struct ao {scalar_t__ format; int samplerate; int bps; TYPE_1__ channels; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct ao *VAR_8, FILE *VAR_9, uint64_t VAR_10)
{
    uint16_t VAR_11 = VAR_8->format == VAR_0 ? VAR_2 : VAR_5;
    int VAR_12 = FUNC_0(VAR_8->format) * 8;


    FUNC_2(VAR_6, VAR_9);


    FUNC_2(12 + 40 + 8 + VAR_10, VAR_9);
    FUNC_2(VAR_7, VAR_9);


    FUNC_2(VAR_3, VAR_9);
    FUNC_2(40, VAR_9);
    FUNC_1(VAR_4, VAR_9);
    FUNC_1(VAR_8->channels.num, VAR_9);
    FUNC_2(VAR_8->samplerate, VAR_9);
    FUNC_2(VAR_8->bps, VAR_9);
    FUNC_1(VAR_8->channels.num * (VAR_12 / 8), VAR_9);
    FUNC_1(VAR_12, VAR_9);


    FUNC_1(22, VAR_9);
    FUNC_1(VAR_12, VAR_9);
    FUNC_2(FUNC_3(&VAR_8->channels), VAR_9);

    FUNC_2(VAR_11, VAR_9);
    FUNC_2(0x00100000, VAR_9);
    FUNC_2(0xAA000080, VAR_9);
    FUNC_2(0x719B3800, VAR_9);


    FUNC_2(VAR_1, VAR_9);
    FUNC_2(VAR_10, VAR_9);
}
