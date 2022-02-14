
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int sd_id128_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char**,int *,int *,int *,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*) ;

__attribute__((used)) static int FUNC_4(
                bool VAR_2,
                uint32_t *VAR_3,
                uint64_t *VAR_4,
                uint64_t *VAR_5,
                sd_id128_t *VAR_6) {

        char *VAR_7;
        int VAR_8;







        VAR_8 = FUNC_0(VAR_1, VAR_2, &VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);
        if (VAR_8 == -VAR_0)
                return FUNC_3(VAR_8,
                                       "Couldn't find EFI system partition. It is recommended to mount it to /boot or /efi.\n"
                                       "Alternatively, use --esp-path= to specify path to mount point.");
        if (VAR_8 < 0)
                return VAR_8;

        FUNC_1(VAR_1, VAR_7);
        FUNC_2("Using EFI System Partition at %s.", VAR_1);

        return 1;
}
