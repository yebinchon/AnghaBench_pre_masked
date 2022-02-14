
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gl_attrib_node {int kind; } ;
typedef int GLbitfield ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static struct gl_attrib_node *FUNC_1( GLbitfield VAR_0 )
{
   struct gl_attrib_node *VAR_1;

   VAR_1 = (struct gl_attrib_node *) FUNC_0( sizeof(struct gl_attrib_node) );
   if (VAR_1) {
      VAR_1->kind = VAR_0;
   }
   return VAR_1;
}
