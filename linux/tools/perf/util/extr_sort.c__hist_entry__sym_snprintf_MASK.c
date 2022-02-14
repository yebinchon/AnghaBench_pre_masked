
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct symbol {scalar_t__ type; scalar_t__ inlined; scalar_t__ name; int start; } ;
struct map {scalar_t__ (* unmap_ip ) (struct map*,int ) ;int dso; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char*,size_t,char*,...) ;
 scalar_t__ FUNC_2 (struct map*,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_3(struct map *VAR_3, struct symbol *VAR_4,
         u64 VAR_5, char VAR_6, char *VAR_7, size_t VAR_8,
         unsigned int VAR_9)
{
 size_t VAR_10 = 0;

 if (VAR_2 > 0) {
  char VAR_11 = VAR_3 ? FUNC_0(VAR_3->dso) : '!';
  VAR_10 += FUNC_1(VAR_7, VAR_8, "%-#*llx %c ",
           VAR_0 / 4 + 2, VAR_5, VAR_11);
 }

 VAR_10 += FUNC_1(VAR_7 + VAR_10, VAR_8 - VAR_10, "[%c] ", VAR_6);
 if (VAR_4 && VAR_3) {
  if (VAR_4->type == VAR_1) {
   VAR_10 += FUNC_1(VAR_7 + VAR_10, VAR_8 - VAR_10, "%s", VAR_4->name);
   VAR_10 += FUNC_1(VAR_7 + VAR_10, VAR_8 - VAR_10, "+0x%llx",
     VAR_5 - VAR_3->unmap_ip(VAR_3, VAR_4->start));
  } else {
   VAR_10 += FUNC_1(VAR_7 + VAR_10, VAR_8 - VAR_10, "%.*s",
            VAR_9 - VAR_10,
            VAR_4->name);
   if (VAR_4->inlined)
    VAR_10 += FUNC_1(VAR_7 + VAR_10, VAR_8 - VAR_10,
             " (inlined)");
  }
 } else {
  size_t VAR_12 = VAR_0 / 4;
  VAR_10 += FUNC_1(VAR_7 + VAR_10, VAR_8 - VAR_10, "%-#.*llx",
           VAR_12, VAR_5);
 }

 return VAR_10;
}
