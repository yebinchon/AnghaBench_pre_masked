
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_key_auth {int dummy; } ;
struct key_preparsed_payload {scalar_t__ data; } ;
struct key {int dummy; } ;


 int FUNC_0 (struct key*,struct request_key_auth*) ;

__attribute__((used)) static int FUNC_1(struct key *VAR_0,
     struct key_preparsed_payload *VAR_1)
{
 FUNC_0(VAR_0, (struct request_key_auth *)VAR_1->data);
 return 0;
}
