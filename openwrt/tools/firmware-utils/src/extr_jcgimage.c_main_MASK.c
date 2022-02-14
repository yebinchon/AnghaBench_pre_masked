
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uimage_header {int ih_dcrc; } ;
struct jcg_header {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,void*,size_t) ;
 int FUNC_3 (int,char*,char*,...) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int,size_t) ;
 int FUNC_6 (int,char**,char*) ;
 int FUNC_7 (void*,size_t,char*) ;
 int FUNC_8 (struct uimage_header*,size_t,size_t) ;
 void* FUNC_9 (int *,size_t,int,int ,int,int ) ;
 int FUNC_10 (void*,size_t) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int,int) ;
 int FUNC_13 (char*,size_t*) ;
 char* VAR_11 ;
 int VAR_12 ;
 size_t FUNC_14 (int,void*,size_t) ;
 int FUNC_15 () ;
 size_t FUNC_16 (char*,char**,int) ;
 int FUNC_17 () ;

int
FUNC_18(int VAR_13, char **VAR_14)
{
 struct jcg_header *VAR_15;
 struct uimage_header *VAR_16;
 int VAR_17;
 char *VAR_18 = ((void*)0);
 char *VAR_19 = ((void*)0);
 char *VAR_20 = ((void*)0);
 char *VAR_21 = ((void*)0);
 size_t VAR_22 = VAR_2;
 char *VAR_23;
 int VAR_24 = VAR_5;
 int VAR_25, VAR_26, VAR_27;
 size_t VAR_28, VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;
 void *VAR_34;


 FUNC_0(sizeof(struct jcg_header) == 512);
 FUNC_0(sizeof(struct uimage_header) == 64);
 FUNC_15();

 while ((VAR_17 = FUNC_6(VAR_13, VAR_14, "o:k:f:u:v:m:h")) != -1) {
  switch (VAR_17) {
  case 'o':
   VAR_18 = VAR_11;
   break;
  case 'k':
   if (VAR_24 == VAR_4)
    FUNC_4(1,"-k cannot be combined with -u");

   VAR_24 = VAR_3;
   VAR_19 = VAR_11;
   break;
  case 'f':
   if (VAR_24 == VAR_4)
    FUNC_4(1,"-f cannot be combined with -u");

   VAR_24 = VAR_3;
   VAR_20 = VAR_11;
   break;
  case 'u':
   if (VAR_24 == VAR_3)
    FUNC_4(1,"-u cannot be combined with -k and -r");

   VAR_24 = VAR_4;
   VAR_19 = VAR_11;
   break;
  case 'm':
   if (VAR_11 != ((void*)0))
    VAR_22 = FUNC_16(VAR_11, &VAR_23, 10);

   break;
  case 'v':
   VAR_21 = VAR_11;
   break;
  case 'h':
  default:
   FUNC_17();
  }
 }
 if (VAR_12 != VAR_13)
  FUNC_4(1, "illegal arg \"%s\"", VAR_14[VAR_12]);

 if (VAR_18 == ((void*)0))
  FUNC_4(1, "no output file specified");

 if (VAR_24 == VAR_5)
  FUNC_4(1, "specify either -u or -k and -r");

 if (VAR_24 == VAR_3) {
  if (VAR_19 == ((void*)0) || VAR_20 == ((void*)0))
   FUNC_4(1, "need -k and -r");

  VAR_27 = FUNC_13(VAR_20, &VAR_29);
 }
 VAR_26 = FUNC_13(VAR_19, &VAR_28);
 if (VAR_24 == VAR_4) {
  VAR_32 = sizeof(*VAR_15);
  VAR_30 = VAR_28 + 4;
  VAR_31 = sizeof(*VAR_15) + VAR_30;
 } else {
  VAR_32 = sizeof(*VAR_15) + sizeof(*VAR_16);
  VAR_33 = sizeof(*VAR_15) + sizeof(*VAR_16) + VAR_28;
  VAR_30 = sizeof(*VAR_16) + VAR_28 + VAR_29;
  VAR_31 = sizeof(*VAR_15) + VAR_30;
 }

 if (VAR_31 > VAR_22)
  FUNC_4(1, "payload too large: %zd > %zd\n", VAR_31, VAR_22);


 VAR_25 = FUNC_12(VAR_18, VAR_7 | VAR_6 | VAR_8, 00644);
 if (VAR_25 < 0)
  FUNC_3(1, "cannot open \"%s\"", VAR_18);


 if (FUNC_5(VAR_25, VAR_31) == -1)
  FUNC_3(1, "cannot grow \"%s\" to %zd bytes", VAR_18, VAR_31);

 VAR_34 = FUNC_9(((void*)0), VAR_31, VAR_9|VAR_10, VAR_1, VAR_25, 0);
 VAR_16 = VAR_34 + sizeof(*VAR_15);
 if (VAR_34 == VAR_0)
  FUNC_3(1, "cannot mmap \"%s\"", VAR_18);


 if (FUNC_14(VAR_26, VAR_34 + VAR_32, VAR_28) != VAR_28)
  FUNC_3(1, "cannot copy %s", VAR_19);


 if (VAR_24 == VAR_3) {
  if (FUNC_14(VAR_27, VAR_34+VAR_33, VAR_29) != VAR_29)
   FUNC_3(1, "cannot copy %s", VAR_20);

  FUNC_8(VAR_16, VAR_28, VAR_29);
 } else if (VAR_24 == VAR_4)
  FUNC_2(FUNC_11(VAR_16->ih_dcrc), (void*)VAR_16 + sizeof(*VAR_16),
    VAR_30 - sizeof(*VAR_16));

 FUNC_7(VAR_34, VAR_30, VAR_21);
 FUNC_10(VAR_34, VAR_31);
 FUNC_1(VAR_25);
 return 0;
}
