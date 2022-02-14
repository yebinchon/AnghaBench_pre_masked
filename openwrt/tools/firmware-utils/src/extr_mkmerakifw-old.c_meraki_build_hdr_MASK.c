
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct board_info {size_t imagelen; size_t const magic; size_t const load_addr; size_t const entry; } ;
typedef int FILE ;


 int FUNC_0 (char*,size_t) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
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
 int VAR_11 ;
 int FUNC_2 (unsigned char*,size_t const) ;
 int FUNC_3 (unsigned char*,size_t const,int,int *) ;
 int FUNC_4 (unsigned char*) ;
 size_t FUNC_5 (unsigned char*,size_t,int,int *) ;
 unsigned char* FUNC_6 (size_t) ;
 int FUNC_7 (unsigned char*,int ,size_t) ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (unsigned char*,int ,size_t const) ;

__attribute__((used)) static int FUNC_9(const struct board_info *VAR_13, const size_t VAR_14,
       FILE *VAR_15, FILE *VAR_16)
{
 unsigned char *VAR_17;
 unsigned char *VAR_18;
 size_t VAR_19;
 size_t VAR_20;

 size_t VAR_21;
 VAR_19 = VAR_13->imagelen;
 VAR_20 = VAR_19 - VAR_2;

 if (VAR_14 > VAR_20) {
  FUNC_0("kernel file is too big - max size: 0x%08lX\n", VAR_20);
  return VAR_0;
 }


 if (VAR_12)
  VAR_19 = VAR_14 + VAR_2;


 VAR_18 = FUNC_6(VAR_19);
 if (VAR_18 == ((void*)0)) {
  FUNC_1("no memory for buffer: %s\n");
  return VAR_0;
 }
 FUNC_7(VAR_18, VAR_11, VAR_19);


 VAR_17 = VAR_18 + VAR_2;
 FUNC_3(VAR_17, VAR_14, 1, VAR_16);


 FUNC_8(VAR_18, VAR_10, VAR_13->magic);
 FUNC_8(VAR_18, VAR_5, 0);
 FUNC_8(VAR_18, VAR_6, 0);
 FUNC_8(VAR_18, VAR_7, 0);


 FUNC_8(VAR_18, VAR_9, VAR_13->load_addr);
 FUNC_8(VAR_18, VAR_4, VAR_13->entry);


 FUNC_8(VAR_18, VAR_8, VAR_14);


 FUNC_8(VAR_18, VAR_3, 0);


 FUNC_2(VAR_18, VAR_14 + VAR_2);

 VAR_21 = FUNC_5(VAR_18, VAR_19, 1, VAR_15);

 FUNC_4(VAR_18);

 return VAR_21 == 1 ? VAR_1 : VAR_0;
}
