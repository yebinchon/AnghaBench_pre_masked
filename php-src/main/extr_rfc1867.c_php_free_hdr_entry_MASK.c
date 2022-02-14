
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ value; scalar_t__ key; } ;
typedef TYPE_1__ mime_header_entry ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(mime_header_entry *VAR_0)
{
 if (VAR_0->key) {
  FUNC_0(VAR_0->key);
 }
 if (VAR_0->value) {
  FUNC_0(VAR_0->value);
 }
}
