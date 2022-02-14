
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct array {unsigned int start; unsigned int max; char** elts; } ;


 int FUNC_0 (char*,struct array*,unsigned int,int ) ;
 int FUNC_1 (char*,struct array*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_2 (struct array*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char* FUNC_4(struct array* VAR_0, unsigned VAR_1)
{
    FUNC_2(VAR_0);
    if (VAR_0->start + VAR_1 >= VAR_0->max)
    {
        FUNC_1("Out of bounds: %p %d + %d >= %d\n",
              VAR_0, VAR_0->start, VAR_1, VAR_0->max);
        return ((void*)0);
    }
    FUNC_0("Returning %p[%d] => %s\n",
          VAR_0, VAR_1, FUNC_3(VAR_0->elts[VAR_0->start + VAR_1]));
    return VAR_0->elts[VAR_0->start + VAR_1];
}
