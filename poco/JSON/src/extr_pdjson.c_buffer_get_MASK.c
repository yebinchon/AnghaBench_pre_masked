
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct json_source {int (* peek ) (struct json_source*) ;int position; } ;


 int FUNC_0 (struct json_source*) ;

__attribute__((used)) static int FUNC_1(struct json_source *VAR_0)
{
    int VAR_1 = VAR_0->peek(VAR_0);
    VAR_0->position++;
    return VAR_1;
}
