
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; int st_dev; int st_rdev; int st_nlink; int st_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int*,int,int) ;
 int FUNC_2 (int) ;
 int VAR_11 ;
 int FUNC_3 (int,struct stat*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int,char*,int,...) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*,struct stat*) ;

__attribute__((used)) static void FUNC_11(void)
{
    int VAR_12;
    int VAR_13[2];
    int VAR_14;
    struct stat VAR_15;


    VAR_12 = FUNC_6("stat.tst", VAR_3 | VAR_2 | VAR_1, VAR_9 |VAR_10);
    if (VAR_12 >= 0)
    {
        VAR_14 = FUNC_3(VAR_12, &VAR_15);
        FUNC_5(!VAR_14, "fstat failed: errno=%d\n", VAR_11);
        FUNC_5((VAR_15.st_mode & VAR_7) == VAR_8, "bad format = %06o\n", VAR_15.st_mode);
        FUNC_5((VAR_15.st_mode & 0777) == 0666, "bad st_mode = %06o\n", VAR_15.st_mode);
        FUNC_5(VAR_15.st_dev == 0, "st_dev is %d, expected 0\n", VAR_15.st_dev);
        FUNC_5(VAR_15.st_dev == VAR_15.st_rdev, "st_dev (%d) and st_rdev (%d) differ\n", VAR_15.st_dev, VAR_15.st_rdev);
        FUNC_5(VAR_15.st_nlink == 1, "st_nlink is %d, expected 1\n", VAR_15.st_nlink);
        FUNC_5(VAR_15.st_size == 0, "st_size is %d, expected 0\n", VAR_15.st_size);

        VAR_14 = FUNC_10("stat.tst", &VAR_15);
        FUNC_5(!VAR_14, "stat failed: errno=%d\n", VAR_11);
        FUNC_5((VAR_15.st_mode & VAR_7) == VAR_8, "bad format = %06o\n", VAR_15.st_mode);
        FUNC_5((VAR_15.st_mode & 0777) == 0666, "bad st_mode = %06o\n", VAR_15.st_mode);
        FUNC_5(VAR_15.st_dev == VAR_15.st_rdev, "st_dev (%d) and st_rdev (%d) differ\n", VAR_15.st_dev, VAR_15.st_rdev);
        FUNC_5(VAR_15.st_nlink == 1, "st_nlink is %d, expected 1\n", VAR_15.st_nlink);
        FUNC_5(VAR_15.st_size == 0, "st_size is %d, expected 0\n", VAR_15.st_size);

        VAR_11 = 0xdeadbeef;
        VAR_14 = FUNC_10("stat.tst\\", &VAR_15);
        FUNC_5(VAR_14 == -1, "stat returned %d\n", VAR_14);
        FUNC_5(VAR_11 == VAR_0, "errno = %d\n", VAR_11);

        FUNC_2(VAR_12);
        FUNC_7("stat.tst");
    }
    else
        FUNC_9("open failed with errno %d\n", VAR_11);


    if (FUNC_0(0, 10) == 0)
    {
        VAR_14 = FUNC_3(10, &VAR_15);
        FUNC_5(!VAR_14, "fstat(stdin) failed: errno=%d\n", VAR_11);
        if ((VAR_15.st_mode & VAR_7) == VAR_4)
        {
            FUNC_5(VAR_15.st_mode == VAR_4, "bad st_mode=%06o\n", VAR_15.st_mode);
            FUNC_5(VAR_15.st_dev == 10, "st_dev is %d, expected 10\n", VAR_15.st_dev);
            FUNC_5(VAR_15.st_rdev == 10, "st_rdev is %d, expected 10\n", VAR_15.st_rdev);
            FUNC_5(VAR_15.st_nlink == 1, "st_nlink is %d, expected 1\n", VAR_15.st_nlink);
        }
        else
            FUNC_9("stdin is not a char device? st_mode=%06o\n", VAR_15.st_mode);
        FUNC_2(10);
    }
    else
        FUNC_9("_dup2 failed with errno %d\n", VAR_11);


    if (FUNC_1(VAR_13, 1024, VAR_1) == 0)
    {
        VAR_14 = FUNC_3(VAR_13[0], &VAR_15);
        FUNC_5(!VAR_14, "fstat(pipe) failed: errno=%d\n", VAR_11);
        FUNC_5(VAR_15.st_mode == VAR_6, "bad st_mode=%06o\n", VAR_15.st_mode);
        FUNC_5(VAR_15.st_dev == VAR_13[0], "st_dev is %d, expected %d\n", VAR_15.st_dev, VAR_13[0]);
        FUNC_5(VAR_15.st_rdev == VAR_13[0], "st_rdev is %d, expected %d\n", VAR_15.st_rdev, VAR_13[0]);
        FUNC_5(VAR_15.st_nlink == 1, "st_nlink is %d, expected 1\n", VAR_15.st_nlink);
        FUNC_2(VAR_13[0]);
        FUNC_2(VAR_13[1]);
    }
    else
        FUNC_9("pipe failed with errno %d\n", VAR_11);


    if(FUNC_4("stat.tst") == 0)
    {
        VAR_14 = FUNC_10("stat.tst                         ", &VAR_15);
        FUNC_5(!VAR_14, "stat(directory) failed: errno=%d\n", VAR_11);
        FUNC_5((VAR_15.st_mode & VAR_7) == VAR_5, "bad format = %06o\n", VAR_15.st_mode);
        FUNC_5((VAR_15.st_mode & 0777) == 0777, "bad st_mode = %06o\n", VAR_15.st_mode);
        FUNC_5(VAR_15.st_dev == VAR_15.st_rdev, "st_dev (%d) and st_rdev (%d) differ\n", VAR_15.st_dev, VAR_15.st_rdev);
        FUNC_5(VAR_15.st_nlink == 1, "st_nlink is %d, expected 1\n", VAR_15.st_nlink);

        VAR_11 = 0xdeadbeef;
        VAR_14 = FUNC_10("stat.tst\\ ", &VAR_15);
        FUNC_5(VAR_14 == -1, "stat returned %d\n", VAR_14);
        FUNC_5(VAR_11 == VAR_0, "errno = %d\n", VAR_11);
        FUNC_8( "stat.tst" );
    }
    else
        FUNC_9("mkdir failed with errno %d\n", VAR_11);

    VAR_11 = 0xdeadbeef;
    VAR_14 = FUNC_10("c:", &VAR_15);
    FUNC_5(VAR_14 == -1, "stat returned %d\n", VAR_14);
    FUNC_5(VAR_11 == VAR_0, "errno = %d\n", VAR_11);

    VAR_14 = FUNC_10("c:/", &VAR_15);
    FUNC_5(!VAR_14, "stat returned %d\n", VAR_14);
    FUNC_5(VAR_15.st_dev == 2, "st_dev = %d\n", VAR_15.st_dev);
    FUNC_5(VAR_15.st_rdev == 2, "st_rdev = %d\n", VAR_15.st_rdev);
}
