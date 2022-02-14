
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct cvec {int nchrs; int chrspace; int nranges; int rangespace; int cclasscode; TYPE_1__* ranges; TYPE_1__* chrs; } ;
typedef scalar_t__ pg_wchar ;
typedef scalar_t__ (* pg_wc_probefunc ) (scalar_t__) ;
struct TYPE_7__ {scalar_t__ collation; struct cvec cv; struct TYPE_7__* next; scalar_t__ (* probefunc ) (scalar_t__) ;} ;
typedef TYPE_1__ pg_ctype_cache ;
typedef TYPE_1__ chr ;


 int VAR_0 ;






 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static struct cvec *
FUNC_5(pg_wc_probefunc VAR_5, int VAR_6)
{
 pg_ctype_cache *VAR_7;
 pg_wchar VAR_8;
 pg_wchar VAR_9;
 int VAR_10;
 chr *VAR_11;




 for (VAR_7 = VAR_2; VAR_7 != ((void*)0); VAR_7 = VAR_7->next)
 {
  if (VAR_7->probefunc == VAR_5 &&
   VAR_7->collation == VAR_3)
   return &VAR_7->cv;
 }




 VAR_7 = (pg_ctype_cache *) FUNC_1(sizeof(pg_ctype_cache));
 if (VAR_7 == ((void*)0))
  return ((void*)0);
 VAR_7->probefunc = VAR_5;
 VAR_7->collation = VAR_3;
 VAR_7->cv.nchrs = 0;
 VAR_7->cv.chrspace = 128;
 VAR_7->cv.chrs = (chr *) FUNC_1(VAR_7->cv.chrspace * sizeof(chr));
 VAR_7->cv.nranges = 0;
 VAR_7->cv.rangespace = 64;
 VAR_7->cv.ranges = (chr *) FUNC_1(VAR_7->cv.rangespace * sizeof(chr) * 2);
 if (VAR_7->cv.chrs == ((void*)0) || VAR_7->cv.ranges == ((void*)0))
  goto out_of_memory;
 VAR_7->cv.cclasscode = VAR_6;
 switch (VAR_4)
 {
  case 131:




   VAR_8 = (pg_wchar) VAR_0;

   break;
  case 129:
  case 128:
   VAR_8 = (pg_wchar) VAR_0;
   break;
  case 133:
  case 132:

   VAR_8 = (pg_wchar) VAR_1;
   VAR_7->cv.cclasscode = -1;



   break;
  case 130:
   VAR_8 = (pg_wchar) VAR_0;
   break;
  default:
   VAR_8 = 0;
   break;
 }




 VAR_10 = 0;

 for (VAR_9 = 0; VAR_9 <= VAR_8; VAR_9++)
 {
  if ((*VAR_5) (VAR_9))
   VAR_10++;
  else if (VAR_10 > 0)
  {
   if (!FUNC_3(VAR_7, VAR_9 - VAR_10, VAR_10))
    goto out_of_memory;
   VAR_10 = 0;
  }
 }

 if (VAR_10 > 0)
  if (!FUNC_3(VAR_7, VAR_9 - VAR_10, VAR_10))
   goto out_of_memory;




 if (VAR_7->cv.nchrs == 0)
 {
  FUNC_0(VAR_7->cv.chrs);
  VAR_7->cv.chrs = ((void*)0);
  VAR_7->cv.chrspace = 0;
 }
 else if (VAR_7->cv.nchrs < VAR_7->cv.chrspace)
 {
  VAR_11 = (chr *) FUNC_2(VAR_7->cv.chrs,
          VAR_7->cv.nchrs * sizeof(chr));
  if (VAR_11 == ((void*)0))
   goto out_of_memory;
  VAR_7->cv.chrs = VAR_11;
  VAR_7->cv.chrspace = VAR_7->cv.nchrs;
 }
 if (VAR_7->cv.nranges == 0)
 {
  FUNC_0(VAR_7->cv.ranges);
  VAR_7->cv.ranges = ((void*)0);
  VAR_7->cv.rangespace = 0;
 }
 else if (VAR_7->cv.nranges < VAR_7->cv.rangespace)
 {
  VAR_11 = (chr *) FUNC_2(VAR_7->cv.ranges,
          VAR_7->cv.nranges * sizeof(chr) * 2);
  if (VAR_11 == ((void*)0))
   goto out_of_memory;
  VAR_7->cv.ranges = VAR_11;
  VAR_7->cv.rangespace = VAR_7->cv.nranges;
 }




 VAR_7->next = VAR_2;
 VAR_2 = VAR_7;

 return &VAR_7->cv;




out_of_memory:
 if (VAR_7->cv.chrs)
  FUNC_0(VAR_7->cv.chrs);
 if (VAR_7->cv.ranges)
  FUNC_0(VAR_7->cv.ranges);
 FUNC_0(VAR_7);

 return ((void*)0);
}
