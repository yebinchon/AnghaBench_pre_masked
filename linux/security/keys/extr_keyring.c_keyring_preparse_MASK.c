
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key_preparsed_payload {scalar_t__ datalen; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct key_preparsed_payload *VAR_1)
{
 return VAR_1->datalen != 0 ? -VAR_0 : 0;
}
