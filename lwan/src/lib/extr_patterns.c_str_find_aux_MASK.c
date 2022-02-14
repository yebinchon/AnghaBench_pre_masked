
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct str_find {int sm_so; scalar_t__ sm_eo; } ;
struct match_state {int maxcaptures; char const* src_init; char const* src_end; char const* p_end; int * error; scalar_t__ level; int repetitioncounter; int matchdepth; } ;
typedef scalar_t__ off_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*,size_t,char const*,size_t) ;
 char* FUNC_1 (struct match_state*,char const*,char const*) ;
 int FUNC_2 (struct match_state*,char*) ;
 scalar_t__ FUNC_3 (char const*,size_t) ;
 int FUNC_4 (struct match_state*,char const*,char const*,struct str_find*,size_t) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static int
FUNC_6(struct match_state *VAR_3, const char *VAR_4, const char *VAR_5,
    struct str_find *VAR_6, size_t VAR_7, off_t VAR_8)
{
 size_t VAR_9 = FUNC_5(VAR_5);
 size_t VAR_10 = FUNC_5(VAR_4);
 const char *VAR_11 = VAR_5;
 const char *VAR_12 = VAR_4;
 const char *VAR_13, *VAR_14;
 int VAR_15, VAR_16;

 if (VAR_8 < 0)
  VAR_8 = 0;
 else if (VAR_8 > (off_t)VAR_9)
  return FUNC_2(VAR_3, "starting after string's end");
 VAR_13 = VAR_11 + VAR_8;

 if (FUNC_3(VAR_12, VAR_10)) {

  VAR_14 = FUNC_0(VAR_13, VAR_9 - (size_t)VAR_8, VAR_12, VAR_10);
  if (VAR_14 == ((void*)0))
   return (0);

  VAR_16 = 0;
  VAR_6[VAR_16].sm_so = 0;
  VAR_6[VAR_16].sm_eo = (off_t)VAR_9;
  if (VAR_7 > 1) {
   VAR_16++;
   VAR_6[VAR_16].sm_so = VAR_14 - VAR_11;
   VAR_6[VAR_16].sm_eo = (off_t)((VAR_14 - VAR_11) + (off_t)VAR_10);
  }
  return (VAR_16 + 1);
 }

 VAR_15 = (*VAR_12 == '^');
 if (VAR_15) {
  VAR_12++;
  VAR_10--;
 }
 VAR_3->maxcaptures = (int)((VAR_7 > VAR_0 ? VAR_0 : VAR_7) - 1);
 VAR_3->matchdepth = VAR_1;
 VAR_3->repetitioncounter = VAR_2;
 VAR_3->src_init = VAR_11;
 VAR_3->src_end = VAR_11 + VAR_9;
 VAR_3->p_end = VAR_12 + VAR_10;
 do {
  const char *VAR_17;
  VAR_3->level = 0;
  if ((VAR_17 = FUNC_1(VAR_3, VAR_13, VAR_12)) != ((void*)0)) {
   VAR_6->sm_so = 0;
   VAR_6->sm_eo = (off_t)VAR_9;
   return FUNC_4(VAR_3, VAR_13, VAR_17, VAR_6 + 1, VAR_7 - 1) + 1;

  } else if (VAR_3->error != ((void*)0)) {
   return 0;
  }
 } while (VAR_13++ < VAR_3->src_end && !VAR_15);

 return 0;
}
