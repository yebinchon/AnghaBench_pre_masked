
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_int64_t ;
struct zip_error {int dummy; } ;
struct zip_cdir {int dummy; } ;
typedef size_t off_t ;
typedef int FILE ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct zip_cdir*) ;
 int FUNC_1 (int *,struct zip_cdir*,struct zip_error*) ;
 int FUNC_2 (struct zip_error*,int ,int ) ;
 unsigned char* FUNC_3 (unsigned char*,size_t,unsigned char const*,int) ;
 struct zip_cdir* FUNC_4 (int *,size_t,unsigned char*,unsigned char*,size_t,unsigned int,struct zip_error*) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_6 (int *) ;
 size_t FUNC_7 (unsigned char*,int,size_t,int *) ;
 int FUNC_8 (unsigned char*) ;
 int FUNC_9 (int *,size_t,int ) ;
 size_t FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (size_t) ;
 int FUNC_12 (int*,struct zip_error*,int ) ;

__attribute__((used)) static struct zip_cdir *
FUNC_13(FILE *VAR_12, unsigned int VAR_13, int *VAR_14, off_t VAR_15)
{
    struct zip_cdir *VAR_16, *VAR_17;
    unsigned char *VAR_18, *VAR_19;
    off_t VAR_20;
    size_t VAR_21;
    zip_int64_t VAR_22, VAR_23;
    zip_int64_t VAR_24;
    struct zip_error VAR_25;

    VAR_23 = FUNC_9(VAR_12, -(VAR_15 < VAR_0 ? VAR_15 : VAR_0), VAR_5);
    if (VAR_23 == -1 && VAR_11 != VAR_1) {

 FUNC_12(VAR_14, ((void*)0), VAR_10);
 return ((void*)0);
    }
    VAR_20 = FUNC_10(VAR_12);


    if ((VAR_18=(unsigned char *)FUNC_11(VAR_0)) == ((void*)0)) {
 FUNC_12(VAR_14, ((void*)0), VAR_7);
 return ((void*)0);
    }

    FUNC_5(VAR_12);
    VAR_21 = FUNC_7(VAR_18, 1, VAR_0, VAR_12);

    if (FUNC_6(VAR_12)) {
 FUNC_12(VAR_14, ((void*)0), VAR_9);
 FUNC_8(VAR_18);
 return ((void*)0);
    }

    VAR_24 = -1;
    VAR_16 = ((void*)0);
    VAR_19 = VAR_18+ (VAR_21 < VAR_0 ? 0 : VAR_2);
    FUNC_2(&VAR_25, VAR_8, 0);

    while ((VAR_19=FUNC_3(VAR_19, VAR_21-(size_t)(VAR_19-VAR_18)-(VAR_3-4),
         (const unsigned char *)VAR_4, 4))!=((void*)0)) {


 VAR_19++;
 if ((VAR_17=FUNC_4(VAR_12, VAR_20, VAR_18, VAR_19-1, VAR_21, VAR_13,
       &VAR_25)) == ((void*)0))
     continue;

 if (VAR_16) {
     if (VAR_24 <= 0)
  VAR_24 = FUNC_1(VAR_12, VAR_16, &VAR_25);
     VAR_22 = FUNC_1(VAR_12, VAR_17, &VAR_25);
     if (VAR_24 < VAR_22) {
  FUNC_0(VAR_16);
  VAR_16 = VAR_17;
  VAR_24 = VAR_22;
     }
     else
  FUNC_0(VAR_17);
 }
 else {
     VAR_16 = VAR_17;
     if (VAR_13 & VAR_6)
  VAR_24 = FUNC_1(VAR_12, VAR_16, &VAR_25);
     else
  VAR_24 = 0;
 }
 VAR_17 = ((void*)0);
    }

    FUNC_8(VAR_18);

    if (VAR_24 < 0) {
 FUNC_12(VAR_14, &VAR_25, 0);
 FUNC_0(VAR_16);
 return ((void*)0);
    }

    return VAR_16;
}
