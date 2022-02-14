
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ __u64 ;
typedef size_t __u32 ;
typedef int __s64 ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*,char*,int,int,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 size_t FUNC_2 (int,size_t) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_3 (int ,int,int,size_t const,int ) ;
 int FUNC_4 (int,size_t const*) ;
 int FUNC_5 (int,size_t const*,scalar_t__*) ;
 int FUNC_6 (int,size_t const*,int*,int ) ;
 int FUNC_7 (int) ;
 int VAR_15 ;
 int FUNC_8 (int,int,int,int*,scalar_t__*,int) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_10(void)
{


 const __u32 VAR_16 = 4, VAR_17 = 0, VAR_18 = 3;
 int VAR_19[2] = { VAR_14, VAR_12 }, VAR_20;
 __u64 VAR_21[2], VAR_22, VAR_23;
 __s64 VAR_24[2] = { -1, -1 }, VAR_25 = -1;
 const __u32 VAR_26 = VAR_16;
 int VAR_27, VAR_28, VAR_29, VAR_30;
 __u32 VAR_31 = 0;
 int VAR_32;

 VAR_27 = FUNC_3(VAR_3,
    sizeof(__u32), sizeof(__u64), VAR_16, 0);
 FUNC_1(VAR_27 == -1, "reuseport array create",
       "map_fd:%d, errno:%d\n", VAR_27, VAR_15);


 VAR_28 = FUNC_4(VAR_27, &VAR_26);
 FUNC_1(VAR_28 != -1 || VAR_15 != VAR_5, "reuseport array del >=max_entries",
       "err:%d errno:%d\n", VAR_28, VAR_15);

 VAR_28 = FUNC_6(VAR_27, &VAR_26, &VAR_25, VAR_1);
 FUNC_1(VAR_28 != -1 || VAR_15 != VAR_5,
       "reuseport array update >=max_entries",
       "err:%d errno:%d\n", VAR_28, VAR_15);

 VAR_28 = FUNC_5(VAR_27, &VAR_26, &VAR_23);
 FUNC_1(VAR_28 != -1 || VAR_15 != VAR_8,
       "reuseport array update >=max_entries",
       "err:%d errno:%d\n", VAR_28, VAR_15);


 VAR_28 = FUNC_5(VAR_27, &VAR_18, &VAR_23);
 FUNC_1(VAR_28 != -1 || VAR_15 != VAR_8,
       "reuseport array lookup not-exist elem",
       "err:%d errno:%d\n", VAR_28, VAR_15);
 VAR_28 = FUNC_4(VAR_27, &VAR_18);
 FUNC_1(VAR_28 != -1 || VAR_15 != VAR_8,
       "reuseport array del not-exist elem",
       "err:%d errno:%d\n", VAR_28, VAR_15);

 for (VAR_29 = 0; VAR_29 < FUNC_0(VAR_19); VAR_29++) {
  VAR_20 = VAR_19[VAR_29];

  FUNC_8(VAR_20, VAR_27, sizeof(__u64), VAR_24,
          VAR_21, FUNC_0(VAR_24));



  VAR_28 = FUNC_6(VAR_27, &VAR_18, &VAR_24[VAR_31],
       VAR_2);
  FUNC_1(VAR_28 != -1 || VAR_15 != VAR_8,
        "reuseport array update empty elem BPF_EXIST",
        "sock_type:%d err:%d errno:%d\n",
        VAR_20, VAR_28, VAR_15);
  VAR_31 = ({ (VAR_28) ? VAR_31 : !VAR_31; });


  VAR_28 = FUNC_6(VAR_27, &VAR_18, &VAR_24[VAR_31],
       VAR_4);
  FUNC_1(VAR_28 == -1,
        "reuseport array update empty elem BPF_NOEXIST",
        "sock_type:%d err:%d errno:%d\n",
        VAR_20, VAR_28, VAR_15);
  VAR_31 = ({ (VAR_28) ? VAR_31 : !VAR_31; });


  VAR_28 = FUNC_6(VAR_27, &VAR_18, &VAR_24[VAR_31],
       VAR_2);
  FUNC_1(VAR_28 == -1,
        "reuseport array update same elem BPF_EXIST",
        "sock_type:%d err:%d errno:%d\n", VAR_20, VAR_28, VAR_15);
  VAR_31 = ({ (VAR_28) ? VAR_31 : !VAR_31; });


  VAR_28 = FUNC_6(VAR_27, &VAR_18, &VAR_24[VAR_31],
       VAR_4);
  FUNC_1(VAR_28 != -1 || VAR_15 != VAR_7,
        "reuseport array update non-empty elem BPF_NOEXIST",
        "sock_type:%d err:%d errno:%d\n",
        VAR_20, VAR_28, VAR_15);
  VAR_31 = ({ (VAR_28) ? VAR_31 : !VAR_31; });


  VAR_28 = FUNC_6(VAR_27, &VAR_18, &VAR_24[VAR_31],
       VAR_1);
  FUNC_1(VAR_28 == -1,
        "reuseport array update same sk with BPF_ANY",
        "sock_type:%d err:%d errno:%d\n", VAR_20, VAR_28, VAR_15);

  VAR_25 = VAR_24[VAR_31];
  VAR_22 = VAR_21[VAR_31];


  VAR_28 = FUNC_6(VAR_27, &VAR_18, &VAR_25, VAR_1);
  FUNC_1(VAR_28 != -1 || VAR_15 != VAR_6,
        "reuseport array update same sk with same index",
        "sock_type:%d err:%d errno:%d\n",
        VAR_20, VAR_28, VAR_15);

  VAR_28 = FUNC_6(VAR_27, &VAR_17, &VAR_25, VAR_1);
  FUNC_1(VAR_28 != -1 || VAR_15 != VAR_6,
        "reuseport array update same sk with different index",
        "sock_type:%d err:%d errno:%d\n",
        VAR_20, VAR_28, VAR_15);


  VAR_28 = FUNC_4(VAR_27, &VAR_18);
  FUNC_1(VAR_28 == -1, "reuseport array delete sk",
        "sock_type:%d err:%d errno:%d\n",
        VAR_20, VAR_28, VAR_15);


  VAR_28 = FUNC_6(VAR_27, &VAR_18, &VAR_25, VAR_4);
  FUNC_1(VAR_28 == -1,
        "reuseport array re-add with BPF_NOEXIST after del",
        "sock_type:%d err:%d errno:%d\n", VAR_20, VAR_28, VAR_15);


  VAR_28 = FUNC_5(VAR_27, &VAR_18, &VAR_23);
  FUNC_1(VAR_28 == -1 || VAR_22 != VAR_23,
        "reuseport array lookup re-added sk",
        "sock_type:%d err:%d errno:%d sk_cookie:0x%llx map_cookie:0x%llxn",
        VAR_20, VAR_28, VAR_15, VAR_22, VAR_23);


  for (VAR_30 = 0; VAR_30 < FUNC_0(VAR_24); VAR_30++)
   FUNC_7(VAR_24[VAR_30]);
  VAR_28 = FUNC_5(VAR_27, &VAR_18, &VAR_23);
  FUNC_1(VAR_28 != -1 || VAR_15 != VAR_8,
        "reuseport array lookup after close()",
        "sock_type:%d err:%d errno:%d\n",
        VAR_20, VAR_28, VAR_15);
 }


 VAR_25 = FUNC_9(VAR_0, VAR_13, VAR_11);
 FUNC_1(VAR_25 == -1, "socket(SOCK_RAW)", "err:%d errno:%d\n",
       VAR_28, VAR_15);
 VAR_28 = FUNC_6(VAR_27, &VAR_18, &VAR_25, VAR_4);
 FUNC_1(VAR_28 != -1 || VAR_15 != VAR_10, "reuseport array update SOCK_RAW",
       "err:%d errno:%d\n", VAR_28, VAR_15);
 FUNC_7(VAR_25);


 FUNC_7(VAR_27);


 VAR_27 = FUNC_3(VAR_3,
    sizeof(__u32), sizeof(__u32), VAR_16, 0);
 FUNC_1(VAR_27 == -1, "reuseport array create",
       "map_fd:%d, errno:%d\n", VAR_27, VAR_15);
 FUNC_8(VAR_14, VAR_27, sizeof(__u32), &VAR_25,
         &VAR_22, 1);
 VAR_32 = VAR_25;
 VAR_28 = FUNC_6(VAR_27, &VAR_18, &VAR_32, VAR_4);
 FUNC_1(VAR_28 == -1, "reuseport array update 32 bit fd",
       "err:%d errno:%d\n", VAR_28, VAR_15);
 VAR_28 = FUNC_5(VAR_27, &VAR_18, &VAR_23);
 FUNC_1(VAR_28 != -1 || VAR_15 != VAR_9,
       "reuseport array lookup 32 bit fd",
       "err:%d errno:%d\n", VAR_28, VAR_15);
 FUNC_7(VAR_32);
 FUNC_7(VAR_27);
}
