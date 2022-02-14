
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* sdlSoapBindingFunctionBodyPtr ;
struct TYPE_3__ {scalar_t__ headers; scalar_t__ ns; } ;
typedef int HashTable ;


 scalar_t__ FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(sdlSoapBindingFunctionBodyPtr VAR_0, HashTable *VAR_1)
{
 if (VAR_0->ns) {
  VAR_0->ns = FUNC_1(VAR_0->ns);
 }

 if (VAR_0->headers) {
  VAR_0->headers = FUNC_0(VAR_0->headers, VAR_1);
 }
}
