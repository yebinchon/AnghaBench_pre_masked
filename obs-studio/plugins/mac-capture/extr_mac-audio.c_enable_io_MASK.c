
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coreaudio_data {int unit; } ;
typedef enum coreaudio_io_type { ____Placeholder_coreaudio_io_type } coreaudio_io_type ;
typedef int enable_int ;
typedef int UInt32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ,int*,int) ;

__attribute__((used)) static inline bool FUNC_1(struct coreaudio_data *VAR_6,
        enum coreaudio_io_type VAR_7, bool VAR_8)
{
 UInt32 VAR_9 = VAR_8;
 return FUNC_0(VAR_6->unit, VAR_5,
       (VAR_7 == VAR_2) ? VAR_3
          : VAR_4,
       (VAR_7 == VAR_2) ? VAR_0 : VAR_1,
       &VAR_9, sizeof(VAR_9));
}
