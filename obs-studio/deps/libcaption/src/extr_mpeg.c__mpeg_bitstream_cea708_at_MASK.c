
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t front; int * cea708; } ;
typedef TYPE_1__ mpeg_bitstream_t ;
typedef int cea708_t ;


 size_t VAR_0 ;

cea708_t* FUNC_0(mpeg_bitstream_t* VAR_1, size_t VAR_2) { return &VAR_1->cea708[(VAR_1->front + VAR_2) % VAR_0]; }
