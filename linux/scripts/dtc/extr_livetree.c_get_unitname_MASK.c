
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node {char* name; size_t basenamelen; } ;



const char *FUNC_0(struct node *VAR_0)
{
 if (VAR_0->name[VAR_0->basenamelen] == '\0')
  return "";
 else
  return VAR_0->name + VAR_0->basenamelen + 1;
}
