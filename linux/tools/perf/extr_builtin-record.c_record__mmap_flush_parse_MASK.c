
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct record_opts {int mmap_flush; int mmap_pages; } ;
struct parse_tag {char tag; int mult; } ;
struct option {scalar_t__ value; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,struct parse_tag*) ;
 int FUNC_2 (char const*,int *,int ) ;

__attribute__((used)) static int FUNC_3(const struct option *VAR_1,
        const char *VAR_2,
        int VAR_3)
{
 int VAR_4;
 struct record_opts *VAR_5 = (struct record_opts *)VAR_1->value;
 static struct parse_tag VAR_6[] = {
   { .tag = 'B', .mult = 1 },
   { .tag = 'K', .mult = 1 << 10 },
   { .tag = 'M', .mult = 1 << 20 },
   { .tag = 'G', .mult = 1 << 30 },
   { .tag = 0 },
 };

 if (VAR_3)
  return 0;

 if (VAR_2) {
  VAR_5->mmap_flush = FUNC_1(VAR_2, VAR_6);
  if (VAR_5->mmap_flush == (int)-1)
   VAR_5->mmap_flush = FUNC_2(VAR_2, ((void*)0), 0);
 }

 if (!VAR_5->mmap_flush)
  VAR_5->mmap_flush = VAR_0;

 VAR_4 = FUNC_0(VAR_5->mmap_pages);
 VAR_4 /= 4;
 if (VAR_5->mmap_flush > VAR_4)
  VAR_5->mmap_flush = VAR_4;

 return 0;
}
