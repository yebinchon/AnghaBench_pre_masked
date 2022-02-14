
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ,char*,...) ;
 int FUNC_1 (int,char*,int,int ,void*,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_8, char *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13 = 0;

 VAR_11 = VAR_5;

 while (VAR_11) {
  VAR_12 = VAR_11 < VAR_4 ? VAR_11 : VAR_4;

  VAR_10 = FUNC_1(VAR_8, VAR_9, VAR_12, VAR_6 ? VAR_0 : 0,
        VAR_2 ? ((void*)0) : (void *)&VAR_3,
        VAR_2 ? 0 : VAR_1);
  if (VAR_10 == -1)
   FUNC_0(1, VAR_7, "write");
  if (VAR_10 != VAR_12)
   FUNC_0(1, VAR_7, "write: %uB != %uB\n", VAR_10, VAR_12);

  VAR_11 -= VAR_12;
  VAR_13++;
 }

 return VAR_13;
}
