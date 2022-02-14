
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer {char* ptr; int size; } ;


 int FUNC_0 (struct buffer*,size_t) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static void
FUNC_2(struct buffer *VAR_0, const char *VAR_1, size_t VAR_2) {
 FUNC_0(VAR_0,VAR_2+1);
 FUNC_1(VAR_0->ptr + VAR_0->size, VAR_1, VAR_2);
 VAR_0->ptr[VAR_0->size+VAR_2] = '\0';
 VAR_0->size+=VAR_2+1;
}
