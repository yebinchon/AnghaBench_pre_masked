
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8 ;
typedef scalar_t__ uint32 ;
struct TYPE_4__ {scalar_t__ size; int * data; int * end; int * p; } ;
typedef TYPE_1__* STREAM ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,scalar_t__) ;

STREAM
FUNC_3(uint32 VAR_3)
{
 static int VAR_4 = 0;
 STREAM VAR_5 = ((void*)0);




 VAR_5 = &VAR_2[VAR_4];
 VAR_4 = (VAR_4 + 1) % VAR_1;

 if (VAR_3 > VAR_5->size)
 {
  VAR_5->data = (uint8 *) FUNC_2(VAR_5->data, VAR_3);
  VAR_5->size = VAR_3;
 }

 VAR_5->p = VAR_5->data;
 VAR_5->end = VAR_5->data + VAR_5->size;



 return VAR_5;
}
