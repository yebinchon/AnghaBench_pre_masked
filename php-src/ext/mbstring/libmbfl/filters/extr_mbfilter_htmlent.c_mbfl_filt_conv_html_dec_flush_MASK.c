
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int status; int (* output_function ) (unsigned char,int ) ;int data; int (* flush_function ) (int ) ;scalar_t__ opaque; } ;
typedef TYPE_1__ mbfl_convert_filter ;


 int FUNC_0 (unsigned char,int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(mbfl_convert_filter *VAR_0)
{
 int VAR_1, VAR_2 = 0;
 unsigned char *VAR_3;
 int VAR_4 = 0;

 VAR_3 = (unsigned char*)VAR_0->opaque;
 VAR_1 = VAR_0->status;
 VAR_0->status = 0;


 while (VAR_1--) {
  int VAR_5 = (*VAR_0->output_function)(VAR_3[VAR_2++], VAR_0->data);
  if (VAR_5 != 0)
   VAR_4 = VAR_5;
 }

 if (VAR_0->flush_function != ((void*)0)) {
  (*VAR_0->flush_function)(VAR_0->data);
 }

 return VAR_4;
}
