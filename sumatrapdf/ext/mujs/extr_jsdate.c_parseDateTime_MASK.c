
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 double FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int,int) ;
 double VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char const**,int,int*) ;

__attribute__((used)) static double FUNC_5(const char *VAR_3)
{
 int VAR_4 = 1970, VAR_5 = 1, VAR_6 = 1, VAR_7 = 0, VAR_8 = 0, VAR_9 = 0, VAR_10 = 0;
 int VAR_11 = 0;
 double VAR_12;




 if (!FUNC_4(&VAR_3, 4, &VAR_4)) return VAR_0;
 if (*VAR_3 == '-') {
  VAR_3 += 1;
  if (!FUNC_4(&VAR_3, 2, &VAR_5)) return VAR_0;
  if (*VAR_3 == '-') {
   VAR_3 += 1;
   if (!FUNC_4(&VAR_3, 2, &VAR_6)) return VAR_0;
  }
 }

 if (*VAR_3 == 'T') {
  VAR_3 += 1;
  if (!FUNC_4(&VAR_3, 2, &VAR_7)) return VAR_0;
  if (*VAR_3 != ':') return VAR_0;
  VAR_3 += 1;
  if (!FUNC_4(&VAR_3, 2, &VAR_8)) return VAR_0;
  if (*VAR_3 == ':') {
   VAR_3 += 1;
   if (!FUNC_4(&VAR_3, 2, &VAR_9)) return VAR_0;
   if (*VAR_3 == '.') {
    VAR_3 += 1;
    if (!FUNC_4(&VAR_3, 3, &VAR_10)) return VAR_0;
   }
  }
  if (*VAR_3 == 'Z') {
   VAR_3 += 1;
   VAR_11 = 0;
  } else if (*VAR_3 == '+' || *VAR_3 == '-') {
   int VAR_13 = 0, VAR_14 = 0;
   int VAR_15 = *VAR_3 == '+' ? 1 : -1;
   VAR_3 += 1;
   if (!FUNC_4(&VAR_3, 2, &VAR_13)) return VAR_0;
   if (*VAR_3 == ':') {
    VAR_3 += 1;
    if (!FUNC_4(&VAR_3, 2, &VAR_14)) return VAR_0;
   }
   if (VAR_13 > 23 || VAR_14 > 59) return VAR_0;
   VAR_11 = VAR_15 * (VAR_13 * VAR_1 + VAR_14 * VAR_2);
  } else {
   VAR_11 = FUNC_0();
  }
 }

 if (*VAR_3) return VAR_0;

 if (VAR_5 < 1 || VAR_5 > 12) return VAR_0;
 if (VAR_6 < 1 || VAR_6 > 31) return VAR_0;
 if (VAR_7 < 0 || VAR_7 > 24) return VAR_0;
 if (VAR_8 < 0 || VAR_8 > 59) return VAR_0;
 if (VAR_9 < 0 || VAR_9 > 59) return VAR_0;
 if (VAR_10 < 0 || VAR_10 > 999) return VAR_0;
 if (VAR_7 == 24 && (VAR_8 != 0 || VAR_9 != 0 || VAR_10 != 0)) return VAR_0;


 VAR_12 = FUNC_1(FUNC_2(VAR_4, VAR_5-1, VAR_6), FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10));
 return VAR_12 - VAR_11;
}
