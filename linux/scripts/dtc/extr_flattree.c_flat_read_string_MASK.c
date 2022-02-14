
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct inbuf {char* ptr; char const* limit; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct inbuf*,int) ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static char *FUNC_3(struct inbuf *VAR_0)
{
 int VAR_1 = 0;
 const char *VAR_2 = VAR_0->ptr;
 char *VAR_3;

 do {
  if (VAR_2 >= VAR_0->limit)
   FUNC_0("Premature end of data parsing flat device tree\n");
  VAR_1++;
 } while ((*VAR_2++) != '\0');

 VAR_3 = FUNC_2(VAR_0->ptr);

 VAR_0->ptr += VAR_1;

 FUNC_1(VAR_0, sizeof(uint32_t));

 return VAR_3;
}
