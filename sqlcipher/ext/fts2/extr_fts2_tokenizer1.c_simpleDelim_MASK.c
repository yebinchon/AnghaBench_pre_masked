
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* delim; } ;
typedef TYPE_1__ simple_tokenizer ;



__attribute__((used)) static int FUNC_0(simple_tokenizer *VAR_0, unsigned char VAR_1){
  return VAR_1<0x80 && VAR_0->delim[VAR_1];
}
